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
	if (Last_Digit > 5)
	{
		printf("Last Digit of %d is %d and is greater than 5\n", n, Last_Digit);
	}
	else if(Last_Digit == 0)
	{
		printf("Last Digit of %d is %d and is 0\n", n, Last_Digit);
	}
	else
		printf("Last Digit of %d is %d and is less than 6 and not 0\n", n, Last_Digit);

	return (0);
}
