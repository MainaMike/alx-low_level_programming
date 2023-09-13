#include "main.h"
#include <stdio.h>
/**
 * main - computes and prints sum of multiples
 * of 3 and 5
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	int a, b;
	int sum = 0;

	for (num = 0; num < 1024; num++)
	{
		a = num % 3;
		b = num % 5;

		if (a == 0 || b == 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
