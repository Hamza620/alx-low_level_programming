#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>

#define BUF_SIZE 1024

void error_exit(int code, const char *format, ...) {
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	exit(code);
}

int main(int argc, char *argv[]) {
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);

	while ((bytes_read = read(src_fd, buffer, BUF_SIZE)) > 0) {
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(src_fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", src_fd);

	if (close(dest_fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", dest_fd);

	return 0;
}

