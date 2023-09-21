#include "main.h"
/**
 * *string_toupper - changes all lowercase letters to uppercase.
 * @str: string
 *
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}

		ptr++;
	}

	return (str);
}
