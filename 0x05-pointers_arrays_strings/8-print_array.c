#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: number of elements of the array to be orinted
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d,", a[inc]);
		else
			printf("%d", a[inc]);
	}
	_putchar(10);
}
