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

	for(i=0;s[i] != '\0';i++)
	{
		i++;
	}
	return i;
}
