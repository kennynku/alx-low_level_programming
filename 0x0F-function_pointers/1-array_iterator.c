#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - printing each array element of an array
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size > 0)
	{
		(*action)(*array);
		array++;
		size--;
	}
}
