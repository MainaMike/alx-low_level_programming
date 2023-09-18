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
	int i = 0;
	char *j = str;
	int n;

	while (*j != '\0')
	{
		j++;
		counter++;
	}
	i = counter - 1;
	for (n = 0; n <= i; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
