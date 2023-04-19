#include <stdio.h>

int main()
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);
	if(age < 20)
	{
		printf("ooh!Young one\n");
	}
	else if(age > 20 && age < 35)
	{
		printf("get up life is there for the taking\n");
	}
	else if (age >= 35 && age < 55)
	{
		printf("you have life experience in this moment\n");
	}
	else{
		printf("How do you view life,Wise one.Give a piece of advice ill appreciate it\n");
	}
	return 0;
}
