#include "main.h"

/**
 * append_text_to_file - append text to end of file
 *
 * @filename: string of file name
 * @text_content: string to write to file
 *
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, word_len = 0;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[word_len])
			word_len++;
		n_write = write(fp, text_content, word_len);
		if (n_write == -1)
		return (-1);
	}
	close(fp);
	return (1);
}
