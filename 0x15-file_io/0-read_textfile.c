#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file
 * @letters: Quantity of letters to print
 *
 * Return: The quantity of real letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;				/* File Descriptor */
char buf;			/* Buffer to store the readed data */
ssize_t qty, c = 0;	/* Quantity readed */

	if (filename == NULL)
		return (0);
	if (letters <= 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd <= -1)
		return (0);

	do {
		qty = read(fd, &buf, 1);
		if (qty <= -1)
			return (0);
		letters -= qty;
		if (write(1, &buf, qty) != qty)
			return (0);
		c += qty;
	} while (letters > 0 && qty > 0);

	close(fd);
	return (c);
}
