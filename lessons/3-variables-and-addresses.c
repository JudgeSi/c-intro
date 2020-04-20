/**
	Variables and Addresses

	RAM is sepereated into different sections which are addessable.
	The value of a variable is the same as the value at a definitive address.
	Different types of data need a differently siced bytes to be saved, suchas:
		* boolean:  1 bit (0:=false, 1:= true)
		* char:     8 bit (the numbers (0..256) of which each number translates into exactly
				  one character. For instance [0:=a, 1:=b, 2:=c, .. ] )
		* int: 	   32 bit (the numbers (-32`000`000 - 32`000`00)

		TODO more types
**/

{
  int i;
  // somewhere in memory a place is allocated which is big enough to store an int.
  // this place is the address of a: &a
  
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
