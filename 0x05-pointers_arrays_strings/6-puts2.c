#include "main.h"
/**
 * puts2 - prints every other character of a string.
 *
 * @str: string being checked.
 *
 * Return: void
 */
void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0' && str[counter] != '\n')
	{
		_putchar(str[counter]);
		counter += 2;
	}

	_putchar('\n');
}
