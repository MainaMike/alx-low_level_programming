#include "main.h"
/**
 * print_times_table - prints the n times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			_putchar(result);

			if  (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
