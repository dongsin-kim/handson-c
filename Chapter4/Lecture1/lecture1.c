#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//char fruit_name; //stores only one character.

	//printf("what is your favorate fruit?\n");

	//scanf("%c", &fruit_name); // be careful with &

	//printf("you like %c!\n", fruit_name);

	//return 0;

	char fruit_name[40]; //stores only one character.

	printf("What is your favorate fruit?\n");

	scanf("%s", fruit_name); // be careful with &

	printf("You like %s!\n", fruit_name);

	return 0;
}