/**
 * Write a function that capitalizes all words of a string.
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * 6-main.c
 */
#include "main.h"
#include <ctype.h>
char *cap_string(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
	/* capitalize first letter of each word */
		if(i == 0 || isspace(s[i-1]))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return s;
}		
