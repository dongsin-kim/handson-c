#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen()
#include <stdbool.h>
#include "lectrue2.h"

#define WIDTH	25
#define NAME	"Dong-sin Kim"
#define ADDRESS	"Odense, Denmark"

void print_multiple_chars(char c, int n_stars, bool print_newline); // prototype
void print_centered_str(char str[]);

int main()
{
	print_multiple_chars('*', WIDTH, true); // actual argument (argument/parameter)

	print_centered_str(NAME);
	print_centered_str(ADDRESS);

	print_multiple_chars('*', WIDTH, false);

	return 0;
}

void print_multiple_chars(char c, int n_stars, bool print_newline) // formal parameter (argument/paramter)
{
	for (int i = 0; i < n_stars; ++i)
	{
		printf("%c", c); // putchar(c)
	}

	if (print_newline)
	{
		printf("\n");
	}
}

void print_centered_str(char str[])
{
	int n_blanks = 0;

	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks, false);
	printf("%s\n", str);
}