#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer and address of pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p;
	char *str;

	str = "My first strlen!";
	printf("size of pointer: %lu\n", sizeof(p));
	printf("size of pointer: %lu\n", sizeof(str));

	return (0);
}
