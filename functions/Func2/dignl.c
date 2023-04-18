#include "main.h"

/* 7-main.c */

void print_diagonal(int n)
{
	while(n > 0)
	{
		int i = 0;

		if(i < n)
		{
			_putchar(92);
			i++;
		}
	}
	_putchar('\n');
	while(n <= 0)
	{
		_putchar('\n');
	}
}
