#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers 0-98
 *
 * @n: numbers
 *
 * Return: void
 */
void print_to_98(int n)
{
	int counter;

	if (n > 98)
	{
		for (counter = n; counter > 98; counter--)
		{
			_putchar(counter);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (counter = n; counter < 98; counter++)
		{
			_putchar(counter);
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
