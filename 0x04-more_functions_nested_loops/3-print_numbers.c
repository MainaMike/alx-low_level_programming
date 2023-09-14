#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int counter;

	for (counter = '0'; counter <= '9'; counter++)
	{
		_putchar(counter);
	}

	_putchar('\n');
}
