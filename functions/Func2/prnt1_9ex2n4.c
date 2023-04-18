#include "main.h"

/* 4-main.c */

void print_most_numbers(void)
{
	char i = 0;

	for( ; i < 10 ; i++)
	{
		if(i != 2 && i != 4)
		{
		_putchar(i + '0');
		}
	}
	_putchar('\n');
}
