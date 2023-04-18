#include <stdio.h>

int main()
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;
	ptr = &var;
	pptr = &ptr;

	printf("value at var = %d\n", var);
	printf("its ads: %p\n", ptr);
	printf("its ads: %p\n", &var);
	printf("value at *ptr = %d\n", *ptr);
	printf("its ads: %p\n", &ptr);
	printf("value at **pptr = %d\n", **pptr);
	printf("its ads: %p\n", &pptr);
	return 0;
}
