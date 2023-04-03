#include <stdio.h>

int main()
{
	int a;
	int *p;
	a = 10;
	p = &a;
	printf("%p\n", p);
	printf("%d\n", *p);
	printf("value of p = %d\n", *p);
	printf("value of p+1 = %d\n", *(p+1));
	return 0;
}
