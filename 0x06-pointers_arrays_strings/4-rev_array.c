#include "main.h"

/**
 * reverse_array - reversing array of integers
 * @a: array to be reversed
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int z, w;

	for (w = n -1; w >= n / 2; w--)
	{
		z = a[n - 1 - w];
		a[n - 1 - w] = a[w];
		a[w] = z;
	}
}
