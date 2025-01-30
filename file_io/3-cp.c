#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * check_args - Checks the number of arguments passed to the program
 * @argc: Argument count
 *
 * Return: 1 if the argument count is valid, 0 otherwise
 */
int check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (1);
}

/**
 * open_file - Opens a file and returns the file descriptor
 * @filename: The name of the file to open
 * @flags: Flags for open
 * @mode: Permissions for the file (if it's created)
 *
 * Return: The file descriptor on success, -1 on failure
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * copy_content - Copies content from one file to another.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 * @file_to: Name of the destination file for error reporting.
 */
void copy_content(int fd_from, int fd_to, const char *file_to)
{
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_to);
		close_file(fd_from);
		close_file(fd_to);
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_args(argc);
	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	copy_content(fd_from, fd_to, argv[2]);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

