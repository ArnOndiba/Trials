/**
 * Write a function that prints a string, in reverse, followed by a new line.
 * Prototype: void print_rev(char *s);
 * 4-main.c
 */

#include "main.h"

void print_rev(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	while(i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
