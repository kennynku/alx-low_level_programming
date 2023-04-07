#include "main.h"

/**
 * set_bit - function that sets a bit at a given index 1
 * @n: pointer to the num to change
 * @index: index of the bit to set to 1
 * Return: success 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
