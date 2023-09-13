#include "main.h"
#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int counter = 98;
	int fib1 = 1, fib2 = 2, next, i;

	printf("%d, %d", fib1, fib2);

	for (i = 2; i < n; i++)
	{
		next = fib1 + fib2;
		printf(", %d", next);

		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}
