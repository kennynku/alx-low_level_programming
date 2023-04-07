#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: -1 if function fails or filename
 * if the file does not exist the user lacks write permission - -1
 * otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		k = open(filename, O_WRONLY | O_APPEND);

		if (k == -1)
			return (-1);

		len = 0;
		while (*(text_content + len) != '\0')
			len++;

		w = write(k, text_content, len);

		if (w == -1)
		{
			close(k);
			write(STDOUT_FILENO, "fails", 5);

			return (-1);
		}
	}
	close(k);
	return (1);
}
