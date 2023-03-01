#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: First string to be compared
 * @s2: second string to be compared
 * Return: if s1 > s2 = positive difference
 * if s1 < s2 = negative difference
 * if s1 == s2 = 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
