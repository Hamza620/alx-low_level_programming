#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the file's identity ;)
 * @text_content: text to write
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_disc = open(filename, O_WRONLY || O_CREAT || O_TRUNC, 0600);
	ssize_t wr_res = 0;

	if (filename == NULL || file_disc == -1)
		return (-1);
	if (strlen(text_content))
		wr_res = write(file_disc, text_content, strlen(text_content));
	close(file_disc);
	if (wr_res == (ssize_t)strlen(text_content))
		return (1);
	else
		return (-1);
}
