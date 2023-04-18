#include "main.h"

/* 3-main.c */

void _puts(char *str)
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
