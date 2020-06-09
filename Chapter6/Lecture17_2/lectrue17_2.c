#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define INPUT 5

int main()
{
	int sum = 0;
	int numbers[INPUT];


	printf("Enter %d numbers : ", INPUT);
	for (int i = 0; i < INPUT; ++i)
	{
		scanf("%d", &numbers[i]); // &(numbers[i])
	}

	for (int i = 0; i < INPUT; ++i)
	{
		sum += numbers[i];
	}

	//TODO: average

	printf("Sum = %d\n", sum);

	return 0;
}