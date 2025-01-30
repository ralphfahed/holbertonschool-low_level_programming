#include <fcntl.h>   /* For open */
#include <unistd.h>  /* For write, close */
#include <stdlib.h>  /* For NULL */

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0, length = 0;

	if (filename == NULL)
		return (-1);

	/* Open file with permissions rw-------, truncate if it exists */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Write content if text_content is not NULL */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1 || bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

