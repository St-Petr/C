#include <stdio.h>
#include <string.h>

// scanf - collects user inputs before a white space.
// fgets - collects all user inputs.
int main()
{
	int age;
	char name[25];
	float grade;
	
	printf("What is your name? \n");
	fgets(name, 25, stdin);
	printf("\n");
	
	printf("Welcome aboard %s",name);
	printf("How old are you?\n");
	scanf("%d", &age);
	printf("\n");
	
	printf("What was your CGPA for the previous school year?\n");
	scanf("%f", &grade);
	printf("\n");
	
	return 0;
	}
