#include <stdio.h>

int main()
{
	int r = 'z';

	while(r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return 0;
}
