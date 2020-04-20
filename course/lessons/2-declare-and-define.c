/**
 * Writing functions consist of declaration and defintion. 
 * Declaration  means to declare that a function  with a provided name exists.While
 * Defintion means what you define what a functions does (i.e. writing the body of the function.)
 *
 * The Declaration of a function is done in order, therefore for any function to use another function
 * it first needs to be declared above the other function. To mitigate this, a function can be 
 * declated but not defined.
 */

#include <stdio.h>
// Funciton is declared here, so that it can be used in the subsequent function defintion
int plusTwo(int number);

int main(){
    int number = 5;
    printf("value of number: %d \n", number);
    number = plusTwo(number);
    printf("value of number after adding two: %d \n", number);
    return 0;
}

int plusTwo(int number){
    return number + 2; 
}	
