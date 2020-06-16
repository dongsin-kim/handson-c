#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	///* if else */
	//int size = 15, cost;

//	// #1-1
//	if (size < 10)
//		goto a; //label
//	goto b;
//
//a:	cost = 50 * size;
//b:	cost = 100 * size;

	//// #1-2
	//if (size < 10)
	//	cost = 50 * size;
	//cost = 100 * size;
	//else
	//	cost = 100 * size;

	/* loop */
	char c;

read: c = getchar();
	putchar(c);
	if (c == ',') goto quit;
	goto read;
quit:	

	while (1)
	{
		c = getchar();
		putchar(c);
		if (c == '.') break;
	}

	return 0;
}