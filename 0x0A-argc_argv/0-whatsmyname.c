#include <stdio.h>

/**
 * main - writes a programe name
 * @argc: argument count
 * @argv: array of pointers to CLI argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
