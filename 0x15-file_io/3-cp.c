#include "main.h"

#define BUFFER_SIZE 1024

/**
 * _error - exit with error
 *
 * @exit_code: code to exit with
 * @file: file name
 * @fd: file discreption
*/

void _error(int exit_code, char *file, int fd)
{
	switch (exit_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
	}
	exit(exit_code);
}


/**
 * main - Entry point
 *
 * @argc: Number of argument
 * @argv: Arguments
 *
 * Return: 0 on success
*/

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t n_read, n_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		_error(97, NULL, 0);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		_error(98, argv[1], 0);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		_error(99, argv[2], 0);
	}
	while ((n_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(file_to, buffer, n_read);
		if (n_write == -1)
		{
			close(file_from);
			close(file_to);
			_error(99, argv[2], 0);
		}
	}
	if (n_read == -1)
	{
		close(file_from);
		close(file_to);
		_error(98, argv[1], 0);
	}
	if (close(file_from) == -1)
	{
		close(file_to);
		_error(100, NULL, file_from);
	}
	if (close(file_to) == -1)
		_error(100, NULL, file_to);
	return (0);
}

