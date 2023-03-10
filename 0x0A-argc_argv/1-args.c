#include <stdio.h>

/**
 * main - printing number of arguments
 * @argc: arguments count
 * @argv: array of pointers to CLI arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
