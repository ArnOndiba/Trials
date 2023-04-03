#include <stdio.h>

int main()
{
	int a;
	int *p;
	a = 10;
	p = &a;
	printf("a = %d\n", a);
	printf("ads of 'a': %p\n", &a);
	printf("ads of 'a': %p\n", p);
	printf("size of integer is %ld bytes\n", sizeof(int));
	*p = 40;
	printf("a = %d\n", a);
	int b = 20;
	*p = b;
	printf("a = %d\n", a);
	return 0;
}
