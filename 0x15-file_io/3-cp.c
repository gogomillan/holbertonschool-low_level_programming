#include "holberton.h"

void _msgerr(int fd, char *s1, char *s2, int code);

/**
 * main - Copies the content of a file to another file.
 * @ac: Quantity of parameters
 * @av: The parameters
 *
 * Return: 0 success, 97 wrong arguments, 98 error from file, 99 error to file
 *         if cannot close the file descriptor 100
 */
int main(int ac, char **av)
{
int fdf, fdt;		/* File Descriptor from and to */
ssize_t qty;		/* Quantity to read and write */
char buffer[1024];	/* The buffer */

	if (ac != 3)
		_msgerr(STDERR_FILENO, "Usage: cp file_from file_to%s", "\n", 97);
	fdf = open(av[1], O_RDONLY);
	if (fdf <= -1)
		_msgerr(STDERR_FILENO, "Error: Can't read from file %s\n", av[1], 98);
	fdt = open(av[2], O_CREAT | O_WRONLY | O_TRUNC,
					 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdt <= -1)
		_msgerr(STDERR_FILENO, "Error: Can't write to %s\n", av[2], 99);

	do {
		qty = read(fdf, buffer, 1024);
		if (qty <= -1)
			_msgerr(STDERR_FILENO, "Error: Can't read from file %s\n", av[1], 98);
		if (write(fdt, buffer, qty) != qty)
			_msgerr(STDERR_FILENO, "Error: Can't write to %s\n", av[2], 99);
	} while (qty != 0);

	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	if (close(fdf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}

	return (0);
}

/**
 * _msgerr - Send a error message to standard error
 * @fd: The file descriptor
 * @s1: First string to send
 * @s2: Second string to send
 * @code: The exit code
 *
 * Return: Nothing.
 */
void _msgerr(int fd, char *s1, char *s2, int code)
{
	dprintf(fd, s1, s2),
	exit(code);
}
