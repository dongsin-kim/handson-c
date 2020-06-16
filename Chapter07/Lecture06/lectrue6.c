#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned num;
	bool isPrime; // flag, try bool type

	scanf("%u", &num);
	/*
		TODO: Check if num is a prime number
		ex) num is 4, try num % 2, num %3
		ex) num is 5, try num % 2, num %3, num % 4
	*/

	//isPrime = true;

	//for (unsigned i = 2; i < num; ++i)
	//{
	//	if ((num % i) == 0)
	//	{
	//		isPrime = false;
	//		printf("%u is divisible by %u.\n", num, i);
	//	}
	//}

	isPrime = true;

	for (unsigned i = 2; (i*i) <= num; ++i)
	{
		if ((num % i) == 0)
		{
			isPrime = false;

			if (num == i * i)
				printf("%u is divisible by %u.\n", num, i);
			else
				printf("%u is divisible by %u and %u.\n", num, i, num/i);
		}
	}

	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);

	return 0;
}