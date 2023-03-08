#include "main.h"

int find_strlen(char *s);
int _palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returning the length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
