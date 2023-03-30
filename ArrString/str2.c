#include <stdio.h>
#include <string.h>

int main()
{
	char A[7];
	A[0] = 'A';
	A[1] = 'r';
	A[2] = 'n';
	A[3] = 'o';
	A[4] = 'l';
	A[5] = 'd';
	A[6] = '\0';
	printf("My name is %s\n", A);
	int len = strlen(A);
	printf("name length is %d\n", len);
	char R[] = "Richard";
	printf("My Father's name is %s\n", R);
	int length = strlen(R);
	printf("His name length is %d\n", length);
	char M[5] = { 'J','a', 'n' , 'e', '\0' };
	printf("My Mother's name is %s\n", M);
	int lenth = strlen(M);
	printf("Length of her name: %d\n", lenth);
	return 0;
}

