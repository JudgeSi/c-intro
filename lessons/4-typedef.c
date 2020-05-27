/**
	Type definitions

	Just as in (most) other programming languages c offers the possibility to create objects (containers of variables). 

	In the following we want to understand typefs thorugh the example of a phonebook. 
	
	Imagine you want to program a phonebook. Naturally a phonebook does two things: it keeps all entries of the phonebook and it allows for the search of names and their associated phonennumber. 
**/

// first we want to create a structure which allows us to store an entry of the phonebook. Meaning a pair of a name and a number.

// the "struct" keyword allows us to create a new container of any number of variables.
// the "typedef" keyword allows us to declare this struct as a new type in our code (suchas int, char,...)
// whatever stand at the end of our typedef is the given name we choose for a typedef.
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *name;
	char *number;
} person;
 
person* create_phonebook()
{
	// In the following we can now declare a new variable which holds for persons.
	person phonebook[4];
	printf("The phonebook: is addressed at: %x the adress of the first entry is: %x the second is %x \n", &phonebook, &phonebook[0], &phonebook[1]);
	printf("After initalizing there are addresses reserved for the entries in the array: %x %x\n", &phonebook[0].name, &phonebook[0].number);
	// printf("But trying to access their value results in a segementation fault %s %s \n", phonebook[0].name);
	
	// When we try to access the values of the unitialized array will result in a segmentation fault, because it is not present yet, to avoid this we cann use malloc or set the value to NULL
	phonebook[0].name = malloc(sizeof(char *));
	phonebook[0].number = malloc(sizeof(char *));
	printf("After allocating memory the value contains just garbage. Name: %i number: %s \n", phonebook[0].name, phonebook[0].number);
	//printf("Accessing the second entry still is a segmentation fault: %s %s", phonebook[1].name, phonebook[1].number);	
	
	// Alternatively we can also set the values of the entries with NULL init:
	phonebook[1].name = NULL;
	phonebook[1].number = NULL;
	printf("Initalizing the values with null results in:. name: %s number: %s \n", phonebook[1].name, phonebook[1].number);

	// the entries of a person can be accessed with the dot "." notation.
	phonebook[0].name = "Emma";
	phonebook[0].number = "617-555-0100";

	printf("After initalizing the first entry is: name : %s number: %s\n", phonebook[0].name, phonebook[0].number);
	
	// The above initalizations are specific to arrays. Using the single declaration is discussed in t he following:
	// Here we initalize a person as a pointer instead of the actual type
	person *simon;
	printf("Again the adress is defined for everything simon:%x, simon.name:%x, simon.number:%x But notice how the pointer is allocated somewehere else.\n", &simon, &simon->name, &simon->number);	
	//printf("But accessing the members is illegal., simon.name:%s, simon.number:%s\n", simon->name, simon->number);	
	
	// With malloc we can initalize the variable:
	simon = malloc(sizeof(person));
	printf("Once we initalized simon with malloc we can legally access the memory of simons members., simon.name:%s, simon.number:%s\n", simon->name, simon->number);	
	
	

}

int main (void)
{
	create_phonebook();
}


