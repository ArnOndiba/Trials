#include "main.h"

/* 3-main.c */

void print_numbers(void)
{
	char i = 0;
	
	while(i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
