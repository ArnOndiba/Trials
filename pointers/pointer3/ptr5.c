/*
 * Write a function that changes all lowercase letters of a string to uppercase.
 * Prototype: char *string_toupper(char *);
 *
 * 5-main.c
 */
#include "main.h"
#include <ctype.h>

char *string_toupper(char *n)
{
	int i = 0;

	while(n[i] != '\0')
	{
		if(n[i] >= 'a' && n[i] <= 'z')
		{
		n[i] -= 32;
		}
	i++;
	}
	return n;
}
