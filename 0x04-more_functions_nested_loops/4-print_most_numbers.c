#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int counter;

	for (counter = '0'; counter <= '9'; counter++)
	{
		if (counter != '2' && counter != '4')
		{
			_putchar(counter);
		}
	}

	_putchar('\n');
}
