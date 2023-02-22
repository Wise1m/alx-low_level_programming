#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main()
{
	int sum = 0, i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
