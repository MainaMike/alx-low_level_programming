#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array.
 *
 * @a: array
 *
 * @n: number of elements in array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
