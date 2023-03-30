#include <stdio.h>

int main()
{
	int a[] ={2,4,6,8,1};
	int i;
	int *p = a;
	// a++ - invalid
	// p++ - valid

	for(int i = 0; i < 5;i++)
	{
		printf("ads = %p\n", &a[i]);
		printf("ads = %p\n", a+i);
		printf("value = %d\n", a[i]);
		printf("value = %d\n", *(a+i));
	}
	return 0;
}
