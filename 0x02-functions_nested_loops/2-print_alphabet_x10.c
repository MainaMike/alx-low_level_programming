#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');

		counter++;
	}
}
