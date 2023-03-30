#include <stdio.h>

int main()
{
	int a;
	char b;
	int *c;
	char *d;
	
	c = &a;
	d = &b;

	printf("ads of a: %p\n", &a);
	printf("ads of a: %p\n", c);
	printf("size of a is %lu bytes\n", sizeof(int));
	printf("ads of b: %p\n", &b);
	printf("ads of b: %p\n", d);
	printf("size of b is %ld bytes\n", sizeof(char));
	return 0;
}

