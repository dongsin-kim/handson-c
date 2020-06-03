#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
		+=, -=, *=, /=, %=
	*/

	int i = 1024;

	// To compare the optimization level of these two codes.
	// Click 'Local Windows Debugger' -> right click this line -> 'go to disassembly'
	i = i + 10; 
	i += 10;

	i %= 4;

	i = i * (1 + 2);
	i *= 1 + 2;
	i *= (1 + 2);   // Check precedence

	for (int i = 0; i < 10; i += 2)
		;

	return 0;
}