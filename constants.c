#include <stdio.h>

//constants are fixed vars that cannot have thei value changed 

int main()
{
const int AGE = 56;
	AGE = 3; // this will create an error as AGE is a constant
	
	printf ("%u",AGE);
	
	return 0;
	}
	
//a second way to decl constants is
	
	#define AGE 22;
