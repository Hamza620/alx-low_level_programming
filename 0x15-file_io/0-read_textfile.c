#include "main.h"

/**
 * read_textfile - unction that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file's identity :)
 * @letters: letters to read
 * Return: If failed 0, or the number of bytes on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_disc = open(filename, O_RDONLY);
	char txt[8200];
	ssize_t rd_bytes;
	ssize_t wr_bytes;

	if (file_disc == -1 || filename == NULL || !letters)
		return (0);
	rd_bytes = read(file_disc, &txt[0], letters);
	wr_bytes = write(STDOUT_FILENO, &txt[0], rd_bytes);
	close(file_disc);
	return (wr_bytes);
}
