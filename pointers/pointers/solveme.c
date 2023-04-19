#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
	printf("value of 'cc': %p\n", cc);
	printf("ads of 'cc': %p\n", &cc);
	printf("value of 'ccc': %d ('%c')\n", ccc, ccc);
	printf("ads of 'ccc': %p\n", &ccc);
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("value of 'c' before the call: %d ('%c')\n", c, c);
	printf("ads of 'c': %p\n", &c);
	printf("value of 'p': %p\n", p);
	printf("ads of 'p': %p\n", &p);
	modif_my_char_var(p, c);
	printf("value of 'c' after the call: %d ('%c')\n", c, c);
	return (0);
}
