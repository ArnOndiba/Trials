#include <stdio.h>

/**
 * main - illlustrates pointers arithmetic
 *
 * Return: Always 0;
 */
int main (void)
{
	int a[5];

	*a = 98; /* same as *(a + 0) */
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;
	printf("value of a[0]: %d\n", *a);
	printf("value of a[1]: %d\n", *(a + 1));
	printf("value of a[2]: %d\n", *(a + 2));
	printf("value of a[3]: %d\n", *(a + 3));
	printf("value of a[4]: %d\n", *(a + 4));
	printf("----------------\n");
	printf("value of 'a' (also address of a[0]): %p\n", a);
	printf("ads of 'a[1]': %p\n", (a+1));
	printf("ads of 'a[1]': %p\n", &(*(a + 1)));
	printf("ads of 'a[4]': %p\n", (a + 4));
	return 0;
}
