#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	10
	10 /  2 = 5, remainder = 0
	5  /  2 = 2, remainder = 1
	2  /  2 = 1, remainder = 0
	1  /  2 = 0, remainder = 1

	binary --> "1010"
*/

void print_binary(unsigned long num);
void print_binary_loop(unsigned long num);

int main()
{
	unsigned long num = 10;

	print_binary_loop(num);
	print_binary(num);

	printf("\n");

	return 0;
}

//Note: printing order is reversed!
void print_binary_loop(unsigned long num)
{
	while (1)
	{
		int quotient  = num / 2;
		int remainder = num % 2;

		printf("%d", remainder); // remainder is 0 or 1
		
		num = quotient;
		
		if (num == 0) break;
	}

	printf("\n");
}

void print_binary(unsigned long num)
{
	unsigned long quotient  = num / 2;
	unsigned long remainder = num % 2;

	if (quotient > 0)
		print_binary(quotient);

	printf("%lu", remainder);
}