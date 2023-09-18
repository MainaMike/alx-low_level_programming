#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 *
 * @str: string being printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int counter;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length + 1) / 2;

	for (counter = half; str[counter] != '\0'; counter++)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
