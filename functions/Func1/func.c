#include <stdio.h>

void printHello(char* name)
{
	printf("Hello there %s\n", name);
}

int printGoodbye(char* name)
{
	printf("Goodbye there %s\n", name);
	return 1;
}

int main(int argc, char* argv[])
{
	printHello("Bob");
	int i = printGoodbye("ALice");
	printf("printGoodbye returns %d\n", i);
}
