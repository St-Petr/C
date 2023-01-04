#include <stdio.h>

unsigned long long int factorial(unsigned int n)
{
	if(n == 1)
	{
		return 1;
	}
	return n * factorial (n-1);
	}
	
	int main()
	{
		int n = 4;
		printf("Factorial of %d is %llu\n", n, factorial(n));
		return 0;
		}
