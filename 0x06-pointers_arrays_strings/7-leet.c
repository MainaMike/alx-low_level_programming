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
	int length, counter;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	length = 0;
	while (str[length] != '\0')
	{
		counter = 0;
		while (counter < 10)
		{
			if (leetLetters[counter] == str[length])
			{
				str[length] = leetNums[counter];
			}
			counter++;
		}
		length++;
	}

	return (str);
}
