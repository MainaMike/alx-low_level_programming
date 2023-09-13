#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * * @n: the starting number
 */
void print_to_98(int n)
{
	int counter;

	if (n == 98)
	{
		_putchar('0' + n);
		_putchar('\n');
		return;
	}

	if (n > 98)
	{
		for (counter = n; counter >= 98; counter--)
		{
			_putchar('0' + counter);

			if (counter != 98)
				_putchar(',');
		}
	}
	else
	{
		for (counter = n; counter <= 98; counter++)
		{
			_putchar('0' + counter);
			if (counter != 98)
				_putchar(',');
		}
	}

	_putchar('\n');
}
