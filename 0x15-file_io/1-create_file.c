#include "holberton.h"

/**
 * create_file - Creates a file from a string
 * @filename: Name of the file
 * @text_content: String to write
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;			/* File Descriptor */
ssize_t qty;	/* Quantity to write */

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd <= -1)
		return (-1);

	while (text_content != NULL && *text_content != '\0')
	{
		qty = write(fd, text_content, 1);
		if (qty < 1)
			return (-1);
		text_content++;
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}
