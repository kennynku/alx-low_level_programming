#include "main.h"
#include <string.h>

/**
 * read_textfile - Function that reads a text file and prints POSIX std output
 * @filename: text file to read
 * @letters: num of letters to be read
 * Return: w - actual um of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	ssize_t fd, fw;
	char *out;

	if (!filename)
		return (0);

	k = open(filename, O_RDONLY);

	if (k == -1)
		return (0);

	out = malloc(sizeof(char) * (letters));

	if (!out)
		return (0);

	fd = read(k, out, letters);

	if (fd == -1)
		return (0);

	fw = write(STDOUT_FILENO, out, fd);

	free(out);

	close(k);

	return (fw);
}
