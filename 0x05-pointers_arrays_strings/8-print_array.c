#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: number of elements of the array to be orinted
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	printf("\n");
}
