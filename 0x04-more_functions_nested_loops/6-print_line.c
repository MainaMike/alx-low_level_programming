#include "main.h"
/**
 * print_line - draws a straight line
 *
 * @n: number of time character '_' is printed
 *
 * Return: void
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
