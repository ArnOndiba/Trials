#include <stdio.h>

int main()
{
	char rv;

	for (rv = 'z'; rv >= 'a';)
	{
		putchar(rv);
		rv--;
	}
	putchar('\n');
	return 0;
}
