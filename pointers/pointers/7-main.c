#include <stdio.h>

/**
 * modif_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void modif_my_param(int *m)
{
	printf("value of 'm': %p\n", m);
	printf("Ads of 'm': %p\n", &m);
	*m =402;
}

/**
 * main - how to change the value of a variable from outsside the functiom
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;
	printf("value of 'n' before the call: %d\n", n);
	printf("ads of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);
	printf("ads of 'p': %p\n", &p);
	modif_my_param(p);
	printf("value of 'n' after the call: %d\n", n);
	return 0;
}
	
