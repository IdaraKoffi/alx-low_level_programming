#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- To read text file print to STDOUT.
 * @filename: The text file being read
 * @letters: Number of letters to be read
 * Return: p- Actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t td;
	ssize_t p;
	ssize_t s;

	td = open(filename, O_RDONLY);
	if (td == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(td, buf, letters);
	p = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(td);
	return (p);
}
