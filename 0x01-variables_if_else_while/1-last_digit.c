#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - A program that prints last digit of a number.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int Last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	Last_Digit = n % 10;

	printf("Last Digit of %d is %d ", n, Last_Digit);

	if (Last_Digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (Last_Digit == 0)
	{
		printf("and is 0\n");
	}
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
