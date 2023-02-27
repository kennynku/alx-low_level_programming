#include "main.h"

/**
 * puts_half - prints a string
 * @str: pointer to the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	in index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		putchar(str[index]);

	putchar('\n');
}
