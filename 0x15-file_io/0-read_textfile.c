#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard
 *
 * @filename: string of file name
 * @letters: size of letters in file
 *
 * Return: number of letters and 0 if fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	n_read = read(fp, buffer, letters);
	if (n_read == -1)
		return (0);
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1 || n_write != n_read)
		return (0);
	free(buffer);
	close(fp);
	return (n_write);
}
