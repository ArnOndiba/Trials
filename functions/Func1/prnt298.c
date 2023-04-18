#include "main.h"
#include <stdio.h>

/* 11-main.c */

void print_to_98(int n)
{
	while(n < 98)
	{
		_putchar(n);
		_putchar(44);
		_putchar(32);
		n++;
	}
	while(n > 98)
	{
		_putchar(n);
		_putchar(44);
		_putchar(32);
		n--;
	}
	while(n = 98)
	{
		_putchar(n);
	}
}
