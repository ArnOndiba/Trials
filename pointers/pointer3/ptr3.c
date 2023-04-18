/**
 * Write a function that compares two strings.
 * Prototype: int _strcmp(char *s1, char *s2);
 * Your function should work exactly like strcmp
 *
 * 3-main.c
 */

#include "main.h"
#include <string.h>

int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);

	while(s1 > s2)
	{
		return(result);
	}
	while(s2 > s1)
	{
		return(result);
	}
	while(s1 == s2)
	{
		return(result);
	}
	return 0;
}
