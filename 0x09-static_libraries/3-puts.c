#include "main.h"

/**
 * _puts - printing a string
 * @s: input
 * Return: Always 0 (success)
 */
void _puts(char *s)
{
        if (*s != '\0')
        {
                _putchar(*s);
                _puts(s + 1);
        }
        else
                _putchar('\n');
}
