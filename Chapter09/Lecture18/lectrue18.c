#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* u, int* v) // call by pointer vs call by value
{
	printf("%p %p\n", u, v);

	int temp = *u;
	*u = *v;
	*v = temp;
}

int main()
{
	int a = 123;
	int b = 456;

	printf("%p %p\n", &a, &b);
	swap(&a, &b);

	printf("%d %d\n", a, b);

	return 0;
}

/* My code*/
//void swap(int* u_ptr, int* v_ptr)
//{
//	printf("%p %p\n", u_ptr, v_ptr);
//	printf("%d %d\n", *u_ptr, *v_ptr);
//
//	int temp = *u_ptr;
//	*u_ptr = *v_ptr;
//	*v_ptr = temp;
//}
//
//int main()
//{
//	int a = 123;
//	int b = 456;
//
//	int* a_ptr = &a;
//	int* b_ptr = &b;
//
//	printf("%p %p\n", &a, &b);
//	printf("%p %p\n", a_ptr, b_ptr);
//
//	swap(a_ptr, b_ptr); 
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}