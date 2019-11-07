#include "holberton.h"

/**
 * append_text_to_file - Append a string
 * @filename: Name of the file
 * @text_content: String to write
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;			/* File Descriptor */
ssize_t qty;	/* Quantity to write */

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
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
