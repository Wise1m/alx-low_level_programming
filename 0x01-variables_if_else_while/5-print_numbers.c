#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptio: To print numbers from 0 to 10
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	putchar('\n');
	return (0);
}
