#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(srt[i]);
		}
		i++;
	}
	_putchar('\n');
}
