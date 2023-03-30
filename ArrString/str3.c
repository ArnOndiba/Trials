#include <stdio.h>

int main()
{
	char A1[] = "Arnold";
	char *A2;
	A2 = A1;
	printf("%s\n", A1);
	printf("%c\n", A2[5]);
	A2[0] = 'T';
	printf("%s\n", A2);
	return 0;
}

