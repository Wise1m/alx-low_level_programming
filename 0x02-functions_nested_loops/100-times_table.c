#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 *
 * @n: The number of the times table to print
 *
 * If n is greater than 15 or less than 0 the function should not print anything
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for (int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			int result = i * j;
			
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
				{
					_putchar(' ');
				}
			}
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
			}
			_putchar(reslut % 10 + '0');
			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
