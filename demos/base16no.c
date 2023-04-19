#include <stdio.h>

int main()
{
	char r = 48;
	char z = 97;

	while(r <= 57)
	{
		putchar(r);
		r++;
	}
	while(z <= 102)
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return 0;
}
