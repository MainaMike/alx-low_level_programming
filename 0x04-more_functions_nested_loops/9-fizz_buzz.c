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
	int counter, mult3, mult5;

	for (counter = 1; counter <= 100; counter++)
	{
		mult3 = (counter % 3);
		mult5 = (counter % 5);

		if (mult3 == 0 && mult5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (mult3 == 0)
		{
			printf("Fizz ");
		}
		else if (mult5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", counter);
		}
	}

	printf("\n");

	return (0);
}
