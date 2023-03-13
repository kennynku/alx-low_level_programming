#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating array of sizesize and assiggn char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
