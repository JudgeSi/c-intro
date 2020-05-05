#include <stdio.h>

static const int INPUT = 10;

/**
   This function takes the first command line argument and calculates the faculty for it.

**/
// TODO when the * is missing this prints out Int.Max, why is that. What is argv when we forget the ointer annotation
int main(int argc, char *argv[])
{

   //TODO program does not work because it is not so easy to cast the string input of argv to an int

   if(argc != 2){
	printf("this function needs exactly 1 argument. \n"); 
	return 1;
   }

   printf("calculating faculty for %x \n", *argv[1]);

   int result = 0;
   
   for(int i = 0; i < *argv[1]; i++)
   {
        if(i == 0)
	{  
	   result = 1;
	}
        else
	{
	   result = result * i;
	}   
   }
   printf("faculty of %i is %i \n", *argv[1], result);
   return 0;
}
