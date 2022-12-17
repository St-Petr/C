#include <stdio.h>

/**
Format specifiers are used to call on defined data types and use the % sign followed by display characters of the data type.
*/


// %c  - Character
// %s  - String (array of characters)
// %f  - Float
// %lf - Double
// %d  - Integer

// %.1 - Decimal precision (usual . or .1 round the decimal up)
// %1  - Minimum field width
// %-  - Left align


int main(void)
{
	float price1 = 1.99;
	float price2 = 10.70;
	float price3 = 4.46;
	
	char name[] = "Abiola";
	char name2[] = "Peter";
	char name3[] = "Collins";
	
	printf("%s \n",name);
	printf("%s \n",name2);
	printf("%s \n",name3);
	
	printf("\n");
	
	printf("Price 1: $%.f \n", price1);
	printf("Price 2: %.2f \n", price2);
	printf("Price 3: $%.3f \n", price3);
	
	return 0;
	}
