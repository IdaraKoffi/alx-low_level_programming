#include "main.h"

/**
 * create_file - To creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int td, p, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	td = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(td, text_content, len);

	if (td == -1 || p == -1)
		return (-1);

	close(td);

	return (1);
}
