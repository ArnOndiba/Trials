/**
 * Write a function that prints every other character of a string, starting with the first character, followed by a new line.
 * Prototype: void puts2(char *str);
 * 6-main.c
 */

#include "main.h"

void puts2(char *str)
{
	int i = 0;

	for(;str[i] != '\0';i++)
	{
		if(i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
