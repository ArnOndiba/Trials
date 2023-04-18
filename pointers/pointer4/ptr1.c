#include <stdio.h>

int main()
{
	int num=123;
	int *pr2;
	int **pr1;

	pr2 = &num;
	pr1 = &pr2;

	printf("value of num = %d\n", num);
	printf("value of num using pr2 = %d\n", *pr2);
	printf("value of num using pr1 = %d\n", **pr1);
	printf("\n");
	printf("ads of num: %p\n", &num);
	printf("ads of num: %p\n", pr2); //using pr2
	printf("ads of num: %p\n", *pr1); //using pr1
	printf("\n");
	printf("value of pointer pr2 = %p\n", pr2);
	printf("value of pointer pr2 = %p\n", *pr1);//using pr1
	printf("\n");
	printf("ads of pointer pr2 = %p\n", &pr2);
	printf("ads of pointer pr2 = %p\n", pr1);//using pr1
	printf("\n");
	printf("value of pointer pr1 is = %p\n", pr1);
	printf("ads of pointer pr1: %p\n", &pr1);
	/**
	 * value of num == *pr2 == **pr1
	 * &num == pr2 == *pr1
	 * &pr2 == pr1
	 */
	return 0;
}
