#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to name of file to create
 * @text_content: NULL terminated string to write to a file
 * Return: success 1 else -1
 */
int create_file(const char *filename, char *text_content)
{
	int b, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	u = write(b, text_content, len);

	if (b == -1 || u == -1)
		return (-1);

	close(b);
	return (1);
}
