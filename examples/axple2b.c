#include "main.h"
#include <string.h>

/**
 * _strlen - prints sting length
 * @s:variable input
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for(i=0;s[i] != '\0';i++)
	{
		len++;
	}
	return len;
}
