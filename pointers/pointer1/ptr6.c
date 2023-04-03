#include <stdio.h>

int main()
{
	int a = 1025;
	int *p;
	p = &a;
	
	printf("size of a = %lu\n", sizeof(a));
	printf("ads of a = %p\n", &a);
	printf("ads of a = %p, value of a = %d\n", p, a);
	return 0;
}
