#include "main.h"

/**
 * rev_string - Reversing a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	char c;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (k < i)
	{
		c = s[i];
		s[i] = s[k];
		s[k] = c;
		k++;
		i--;
	}
}
