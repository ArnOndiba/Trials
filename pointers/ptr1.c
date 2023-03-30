#include <stdio.h>

int main()
{
	int a;
	int *p;
	a = 10;
	p = &a;
	printf("%p\n", p);
	printf("%d\n", *p);
	printf("%p\n", &a);
	return 0;
}
