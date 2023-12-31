#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: string
 *
 * Return: A pointer to the resultant string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' || str[index - 1] == '\t' ||
				str[index - 1] == '\n' || str[index - 1] == ',' ||
			      str[index - 1] == '.' || str[index - 1] == '!' ||
				str[index - 1] == '?' || str[index - 1] == '"' ||
			      str[index - 1] == '(' || str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' || index == 0)
		{

			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
