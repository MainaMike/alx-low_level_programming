#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int counter;
	int count;

	for (counter = 0; counter < 10; counter++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count > 9)
			{
				_putchar('0' + count / 10);
			}

			_putchar('0' + count % 10);
		}

		_putchar('\n');
	}
}
