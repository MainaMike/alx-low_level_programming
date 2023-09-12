#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, j = 0, result = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}

				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
