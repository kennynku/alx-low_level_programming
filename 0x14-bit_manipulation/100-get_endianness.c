#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 for big and 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
