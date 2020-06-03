#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	const int pwd = 337;
	int guess = 0;

	//printf("Enter secret code : ");
	//scanf("%d", &guess);

	//while (guess != pwd)
	//{
	//	printf("Enter secret code : ");
	//	scanf("%d", &guess);
	//}

	do
	{
		printf("Enter secret code : ");
		scanf("%d", &guess);
	}
	while (guess != pwd);

	printf("Good!\n");

	return 0;
}