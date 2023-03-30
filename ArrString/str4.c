#include <stdio.h>

void print(char *C, char *d)
{
	int i = 0;
	while(C[i] != '\0')
	{
		printf("%c", C[i]);
		i++;
	}
	printf("\n");
	while(*d != '\0')
	{
		printf("%c", *d);
		d++;
	}
	printf("\n");
}
int main()
{
	char C[20] = "Hello";
	char d[10] = "Arnold";
	print(C,d);
}
