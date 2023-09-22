#include "main.h"
/**
 * *infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer for storing result
 * @size_r: buffer size
 *
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		j++;
	}
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	{
		return (0);
	}
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
		{
			val1 = 0;
		}
		else
		{
			val1 = *(n1 + i) - '0';
		}
		if (j < 0)
		{
			val2 = 0;
		}
		else
		{
			val2 = *(n2 + j) - '0';
		}
		temp = val1 + val2 + overflow;
		if (temp >= 10)
		{
			overflow = 1;
		}
		if (digits >= (size_r - 1))
		{
			return (0);
		}
		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
	{
		return (0);
	}
	*(r + digits) = '\0';
	return (r);
}
