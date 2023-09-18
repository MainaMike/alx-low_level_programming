#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: string being printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int counter;
	int num;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		length = counter + 1;
	}
	for (num = length - 1; num >= 0; num--)
	{
		_putchar(s[num]);
	}
}
