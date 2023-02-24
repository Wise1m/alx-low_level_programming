#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%d ", "Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d ", "FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
