#include "main.h"

/* 2-main.c */

void print_alphabet_x10(void)
{
	int j = 0;

	while(j < 10)
	{
		int i = 97;
		while(i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
