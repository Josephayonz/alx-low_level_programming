#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, c, j;

	j = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		tmp = a[c];
		a[c] = a[j];
		a[j--] = tmp;
	}
}
