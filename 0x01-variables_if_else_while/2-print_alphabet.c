#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowrcase.
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
