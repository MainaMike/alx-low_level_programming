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
	int counter;

	for (counter = 0; str[counter] != '\0'; counter += 2)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
