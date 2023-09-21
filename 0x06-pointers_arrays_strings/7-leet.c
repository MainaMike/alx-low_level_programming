#include "main.h"
#include <stdio.h>
/**
 * *leet - encodes a string to 1337
 * @str: string being encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char *result = str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		if ((*str == 'a') || (*str == 'A'))
		{
			*str = '4';
		}
		else if ((*str == 'e') || (*str == 'E'))
		{
			*str = '3';
		}
		else if ((*str == 'o') || (*str == 'O'))
		{
			*str = 'O';
		}
		else if ((*str == 't') || (*str == 'T'))
		{
			*str = '7';
		}
		else if ((*str == 'l') || (*str == 'L'))
		{
			*str = '1';
		}

		str++;
	}

	return (result);
}
