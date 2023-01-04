#include <stdio.h>

int fibonacci(int n)
{
	if(n == 0)
	{
		return 0;
		}
		
		if(n == 1)
		{
			return 1;
			}
			
			return fibonacci(n-1) + fibonacci(n-2);
			}
			
			int main()
			{
				int n;
				for (n = 0; n < 10; n++)
				{
					printf("%d\t\n", fibonacci(n));
					}
					
					return 0;
					}