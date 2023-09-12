#include "main.h"
/**
 * print_last_digit - prints last digit of a number.
 *
 * @num: Number whose last digit is printed.
 *
 * Return: Last digit of the number.
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
	{
		_putchar(-result + 48);
		return (-result);
	}
	else
	{
		_putchar(result + 48);
		return (result);
	}
}
