#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: num to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, b = 0;
	unsigned long int binary;

	for (k = 63; k >= 0; k--)
	{
		binary = n >> k;

		if (binary & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
