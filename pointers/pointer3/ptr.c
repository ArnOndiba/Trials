/**
 * Write a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * 0-main.c
 */

#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return dest;
}
