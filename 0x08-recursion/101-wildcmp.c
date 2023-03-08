#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: frist string
 * @s2: second string containing '*' or not
 * Return: if string 1 else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' || *s1 == *s2)
		return (1);
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
