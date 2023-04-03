#include <stdio.h>

int main()
{
	int x = 5;
	int *p = &x;
	*p = 6;
	printf("%p\n", p);
	int **q = &p;
	printf("%p\n", q);
	int ***r = &q;
	printf("%p\n", r);
	return 0;
}
