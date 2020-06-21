#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 3, b = 5, c = 7, d = 9;
	int* a_ptr = &a;
	int* b_ptr = &b;
	int* c_ptr = &c;
	int* d_ptr = &d;

	printf("%p %p %p %p", &a, &b, &c, &d);

	//Note: Debug --> Windows --> Memory

	return 0;
}