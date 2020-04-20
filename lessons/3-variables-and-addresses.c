/**
	Memory

    	This section is about memory and goes into detail about variables, addresses and pointers.

	RAM (memory) is sepereated into different sections which are addessable.
	The value of a variable is the same as the value at a definitive address.
	Different types of data need a differently siced bytes to be saved, suchas:
		* boolean:  1 bit (0:=false, 1:= true)
		* char:     8 bit (the numbers (0..256) of which each number translates into exactly
				  one character. For instance [0:=a, 1:=b, 2:=c, .. ] )
		* int: 	   32 bit (the numbers (-32`000`000 - 32`000`00)

		TODO more types
**/
#include <stdio.h>

void variables_and_addresses(void)
{
  int i;
  // somewhere in memory a place is allocated which is big enough to store an int.
  // this place is the address of a: &a
  
  // unitialized values just contain a garbage value
  printf("This is the unitialized value i now %i \n", i); 
  // if we set a proper value it gets stored in i
  i = 1;
  printf("i equals %i now \n", i);  

  // this value is stored at somewhere in RAM. We can figure out the bytes required to store a value
  // through the sizeof(i); operation.
  long byteLengthForI = sizeof(i);
  printf("The size to store i is %li bytes \n", sizeof(i));

  // these bytes are located somewhere in memory. This location is called an address and is identitfied by the number of the starting byte.
  // With the &-opeator we can request the value of any variable.
  printf("This is the location of i currently: %x \n", &i);

  // This value of an address is also called a pointer. 
  // In c we have a specific datatype for a pointer. Pointers are marked with a *
  // Furthermore a pointer must have a specific type to which it points.
  int *pointer = &i;
  printf("The value of this pointer is the same as &i: %x  \n", pointer);

  // since pointers are just plain numbers for bytes in memory we can address anything we want in memory by just adding or subtracting from a pointer.
  printf("The first byte in i: %c \n", pointer + 1);



  // excursion: byte limitation:
  // this is also why we cannot store a number which is larger than an int in i. 
  i = 100000000000;
  printf("Setting i to one-hundred-billion does not work: i = %i \n", i);
  
  int *int_pointer;
  int *char_pointer;
  /** These are pointers. Pointers  are a specific type of data, which point to a specific addressspace
  // in memory. TODO is this like a number range? i.e. [x000000-x00000001] für ein bool? or just the
  // plain number. 
  // This data is just a number [0 - 64.000.000.000.000.000.000] (assuming 8 gigabyte RAM) of which 
  // each number points to specific bit in the address space.
 
 // Pointers serve to store:
	* Arrays A colletion of multiple addresses of the same type
	* Strings: Eine Sammlung mehrerer Char speicher adressen in einem Array
	* call by reference  
	* complex datatypes
	* dynamic memory usage
  **/
	
  // parameters * TODO 

}

int main(void)
{
   variables_and_addresses();
   return 0;
}
