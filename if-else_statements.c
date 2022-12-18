#include <stdio.h>
#include <string.h>

// scanf - collects user inputs before a white space.
// fgets - collects all user inputs.

int main()
{
	int age;
	char name[25];
	
	printf("What is your name? \n");
	fgets(name, 25, stdin);
	printf("\n");
	
	printf("Welcome aboard %s",name);
	printf("How old are you?\n");
	scanf("%d", &age);
	printf("\n");
	
	if (age >= 18)
	{
		printf("Hold on, we are setting up your account\n");
		}
		else if (age <= 0)
		{
			printf("Age invalid: User not born yet.");
			}
			else
			{
				printf("You are not old enough");
				}
				
		return 0;
				}
