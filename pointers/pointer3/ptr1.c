/*
 * Write a function that concatenates two strings.
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * The _strncat function is similar to the _strcat function, except that
 *   -it will use at most n bytes from src; and
 *   -src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
 * 1-main.c
 */

#include "main.h"
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0; 
	int i = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0 ; i < n && src[i] ; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
