#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS	10
#define FIRST_CHAR	'A'
//#define LAST_CHAR	'K'

int main()
{
	// Instructor's codes
	int	r; // row loop
	int c; // character loop

	for (r = 0; r < NUM_ROWS; ++r)//outer row loop
	{
		for (c = FIRST_CHAR; c < FIRST_CHAR + r; ++c)//inner character loop
		{
			printf("%c ", c);
		}
		printf("\n");
	}

	// My codes
	//char letter = 'A';
	//int i_max = 5;
	//int j_max = 10;


	//for (int i = 0; i < i_max; i++)
	//{
	//	for (int j = 0; j < j_max; j++)
	//	{
	//		printf("%c", letter++);
	//		printf(" ");
	//	}

	//	printf("\n");
	//	letter = 'A';
	//}

	return 0;
}