// Example1: C-Program

#include <stdio.h>  //preprocessor directive to include Input/Output Standard C library file
#include <stdlib.h> //preprocessor directive to include Standard C library file for Text -to/from- Number conversion, Number manipulations, Memory allocation...etc

//Beginning function Main - which returns integer 
int main (int argc, char* argv[]) 
//Arguments in parentheses passed by value to function Main
{
	char a = atoi(argv[1]); //variable declaration for 'a'
	printf("The value of a was %d \n", a); //output on-screen value passed //Format Control String
	return 0;
}
//End of function Main