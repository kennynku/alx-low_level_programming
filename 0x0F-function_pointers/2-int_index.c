#include "function_pointers.h"

/**
 * int_index - return index place if comparison is true else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	while (size-- > 0)
	{
		i++;

		if (cmp(*array) != 0)
		{
			return (i - 1);
		}
		array++;
	}
	return (-1);
}
