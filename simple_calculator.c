#include <stdio.h>

/* Should carry out simple operations like ADDITION, MULTIPLICATION, DIVITION, SUBTRACTION. Using operators (+, *, /, -)*/

int main()
{
	double num1;
	double num2;
	double result;
	char operator;
	
	printf("Write operator: ");
	scanf("%c", &operator);
	
	printf("\n");
	
	printf("Write first number: ");
	scanf("%lf", &num1);
	
	printf("\n");
	
	printf("Write second number: ");
	scanf("%lf", &num2);
	
	switch(operator)
	{
		case '+':
		result = num1 + num2;
		printf("Result: %.3lf", result);
		break;
		
		case '*':
		result = num1 * num2;
		printf("Result: %.3lf", result);
		break;
		
		case '/':
		result = num1 / num2;
		printf("Result: %.3lf", result);
		break;
		
		case '-':
		result = num1 - num2;
		printf("Result: %.3lf", result);
		break;
		
		default:
		printf("\n%c is not a valid operator",operator);
	}
	
	return 0;
	}
