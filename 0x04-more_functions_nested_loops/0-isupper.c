#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase letters.
 *
 * @c: Character being checked.
 *
 * Return: 1 if c is uppercase or 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
