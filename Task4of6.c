#include<stdio.h>

int main()
{
	int start;
	int finish;
	int i;
	printf("Enter first number: ");
	scanf_s("%d", &start);
	printf("Enter second number (must be greater or equal to %d) :", start);
	scanf_s("%d", &finish);
	for (i = start; i < finish+1; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
			printf("%d\n", i);
	}
	return 0;
}