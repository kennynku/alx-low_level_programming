#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creating an array of intergers
 * @min: minimum range of value stored
 * @max: maximum range of value stored and num of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pointer[i] = min++;
	return (pointer);
}
