#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int sum = 0;

	printf("Enter an integer (q to quit) : ");

	while (scanf("%d", &num) == 1)         // equality operator
	{
		sum = sum + num;

		printf("Enter a next integer (q to quit) :");
	}

	printf("Sum = %d\n", sum);

	//TODO: C-style shortcut

	return 0;
}

//int main()
//{
//	int status;
//	int num;
//	int sum = 0;
//
//	printf("Enter an integer (q to quit) : ");
//
//	status = scanf("%d", &num); // return value of scanf()
//
//	while (status == 1)         // equality operator
//	{
//		sum = sum + num;
//
//		printf("Enter a next integer (q to quit) :");
//		status = scanf("%d", &num);
//	}
//
//	printf("Sum = %d\n", sum);
//
//	//TODO: C-style shortcut
//
//	return 0;
//}