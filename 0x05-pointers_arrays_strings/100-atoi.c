#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 *
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return sign * result;
}
