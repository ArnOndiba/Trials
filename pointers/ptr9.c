#include <stdio.h>

int main()
{
	int x = 5;
	int *p = &x;
	printf("value of x = %d\n", x);
	printf("ads of x = %p\n", p);
	*p = 6;
	printf("value of x = %d\n", x);
	int **q = &p;
	printf("ads of p = %p\n", q);
	printf("%d\n", *(*q));
	int ***r = &q;
	printf("p = %p\n", r);
	printf("%p\n", *(*r));
	printf("%d\n", *(*(*r)));
	return 0;
}
