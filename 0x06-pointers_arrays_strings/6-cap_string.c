#include "main.h"
#include <stdbool.h>
/**
 * is_separator - checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */
bool is_separator(char c)
{
	char separators[] = "\t\n,;.!?\"(){}";
	int counter;

	for (counter = 0; separators[counter] != '\0'; counter++)
	{
		if (c == separators[counter])
		{
			return (true);
		}
	}

	return (false);
}
/**
 * *cap_string - capitalizes all words of a string.
 * @str: string
 *
 * Return: capitalised string
 */
char *cap_string(char *str)
{
	bool capitalize_next = true;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			capitalize_next = true;
		}
		else if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
			capitalize_next = false;
		}
		else
		{
			capitalize_next = false;
		}

		ptr++;
	}

	return (str);
}
