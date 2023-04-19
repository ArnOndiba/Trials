#include <stdio.h>

/**
 * main - dereferencing pointers, example with int and char types
 *
 * Return: 0
 */
int main()
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;
	printf("value of 'c': %d ('%c')\n", c, c);
	printf("ads of 'c': %p\n", &c);
	printf("value of 'pp': %p\n", pp);
	printf("value of 'n': %d\n", n);
	printf("ads of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);
	*p = 402;
	*pp = '0';
	printf("value of 'n': %d\n", n);
	printf("value of '*pp': %d\n", *pp);
	printf("value of 'c': %d ('%c')\n", c, c);
	printf("value of ̈́'*pp': %d ('%c')\n", *pp, *pp);
	return 0;
}
