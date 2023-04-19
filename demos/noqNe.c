#include <stdio.h>

int main()
{
	int p = 'a';

	while(p <= 'z')
	{
		if(p != 'e' && p != 'q')
		{
			putchar(p);	
		}
		p++;
	}
	putchar('\n');
	return 0;
}
