#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string
 * Return: 1 if string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}
/**
 * check_palindrome - recursively checks if a string is a palindrome.
 * @s: string
 * @start: start index of the current substring.
 * @end: end index of current substring
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * _strlen - calculates length of a string.
 * @s: string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
