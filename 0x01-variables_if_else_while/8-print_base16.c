#include <stdio.h>
/**
 * main - A program that prints all numbers of base 16 in lowercase.
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar('a' + (num - 10));
		}

	putchar('\n');

	return (0);
}
