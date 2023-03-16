#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function to perform calloc using malloc
 * @nmemb : num of elements
 * @size: size of each element
 * Return: pointer to calloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	for (k = 0; k < nmemb * size; k++)
		memory[k] = 0;

	return (memory);
}
