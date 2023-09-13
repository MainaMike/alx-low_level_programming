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
		_putchar(48);

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + 48);
			}

			_putchar((result % 10) + 48);
		}

		_putchar('\n');
	}
}
