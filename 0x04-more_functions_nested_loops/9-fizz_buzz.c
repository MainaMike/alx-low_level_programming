#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers 1 to 100
 * prints Fizz for multiples of three
 * prints Buzz for multiples of five
 * prints FizzBuzz for multiples of both three and five.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", counter);
		}

		if (counter != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
