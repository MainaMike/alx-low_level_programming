#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowrcase and uppercase.
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;
	char ALPHA;

        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
		putchar(alpha);
	}
	
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}

	putchar('\n');

	return (0);
}
