#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source stirng
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
