#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 * Return: void (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
