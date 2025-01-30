#include <fcntl.h>   /* For open */
#include <unistd.h>  /* For read, write, close */
#include <stdlib.h>  /* For malloc, free */
#include <stdio.h>   /* For perror (optional) */

/**
 * allocate_buffer - Allocates a buffer to store file content.
 * @size: Number of bytes to allocate.
 *
 * Return: Pointer to allocated buffer, or NULL if allocation fails.
 */
char *allocate_buffer(size_t size)
{
	char *buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of bytes read and printed.
 *         If the file cannot be opened, read, or written, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = allocate_buffer(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}

