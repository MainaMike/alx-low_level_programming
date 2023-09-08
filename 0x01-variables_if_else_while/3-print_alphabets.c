#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowrcase and uppercase.
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
