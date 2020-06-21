#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
	my_func(1);

	return 0;
}

void my_func(int n) // parameter
{
	printf("Level %d, address of variable n = %p\n", n, &n);

	if(n < 4)
		my_func(n + 1); // argument

	printf("Level %d, address of variable n = %p\n", n, &n);
}