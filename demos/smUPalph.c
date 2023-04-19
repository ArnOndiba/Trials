#include <stdio.h>

int main()
{
	char i = 97;
	char c = 65;

	while(i <= 122)
	{
		putchar(i);
		i++;
	}
	while(c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return 0;
}
