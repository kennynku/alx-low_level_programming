#include "main.h"

/**
 * flip_bits - function that counts the bun of bits to change
 * @n: first  num
 * @m: second num
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, b = 0;
	unsigned long int binary;
	unsigned long int dev = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		binary = dev >> k;
		if (binary & 1)
			b++;
	}
	return (b);
}
