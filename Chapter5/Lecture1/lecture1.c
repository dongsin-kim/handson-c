#include <stdio.h>

int main()
{
	/*classical approach*/
//	int n = 1;
//label:
//	printf("%d\n", n);
//	n = n + 1;
//
//	if (n == 10) goto out;
//
//	goto label;
//
//out:

	int n = 1;

	while (n < 3)
	{
		printf("%d\n", n);
		n = n + 1;
	}

	return 0;
}