#include "main.h"
#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int counter;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (counter = 0; counter < 98; counter++)
	{
		sum = fib1 + fib2;

		if (counter < 49)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}

		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}
