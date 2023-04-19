#include <stdio.h>

int main()
{
	char i;
	char *t;

	i = 65;
	t = &i;
	printf("ads of 'i': %p\n", &i);
	printf("value of 't': %p\n", t);
	return 0;
}
