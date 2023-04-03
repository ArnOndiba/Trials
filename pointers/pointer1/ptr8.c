#include <stdio.h>

int main()
{
	int a = 1025;
	int *p;
	p = &a;
	
	printf("size of a = %lu\n", sizeof(a));
	printf("ads of a = %p\n", &a);
	printf("ads of a = %p, value of a = %d\n", p, a);
	printf("ads of a = %p, value of a = %d\n", p+1, *(p+1));
	char *p0;
	p0 = (char*)p;
	printf("size of p0 = %ld\n", sizeof(p0));
	printf("ads of p0 = %p, value of p0 = %d\n", p0, *p0);
	printf("ads of p0 = %p, value of p0 = %d\n", p0+1, *(p0+1));
	return 0;
}
