#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: to print numbers from 0 to 10
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}

