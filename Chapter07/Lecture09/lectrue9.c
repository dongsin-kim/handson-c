#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//// #1
	//int temp;
	//temp = true ? 1024 : 7; // ternary
	//printf("%d\n", temp);
	//
	//temp = false ? 1024 : 7;
	//printf("%d\n", temp);

	//// #2
	//int a = 1, b = 2;
	//int max = (a > b) ? a : b;


	// #2
	int number;
	scanf("%d", &number);

	const bool is_even = (number % 2 == 0) ? printf("Even") : printf("Odd");

	//if (number % 2 == 0)
	//	is_even = true;
	//else
	//	is_even = false;

	//const bool is_even = (number % 2 == 0) ? true : false;

	//if (is_even)
	//	printf("Even");
	//else
	//	printf("Odd");

	return 0;
}