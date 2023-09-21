#include "main.h"
/**
 * reverse_array - reverses contents of an array of integers
 * @a: string
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int counter;
	int temp;

	for (counter = 0; counter < n / 2; counter++)
	{
		temp = a[counter];
		a[counter] = a[n - counter - 1];
		a[n - counter - 1] = temp;
	}
}
