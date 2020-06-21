#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
	my_func(1); // argument

	return 0;
}

void my_func(int n) // parameter
{
	printf("Level %d, address of variable n = %d\n", n, (int)& n); //ptr -> int casting

	if (n < 4)
		my_func(n + 1);

	printf("Level %d, address of variable n = %d\n", n, (int)& n); //ptr -> int casting
}