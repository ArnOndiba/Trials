#include "main.h"

/**
 * print_rev - prints a tring in reverse
 * @s: variable input
 *
 * Return: reverse string
 */
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
