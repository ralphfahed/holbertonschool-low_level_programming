#include <fcntl.h>	/* For open */
#include <unistd.h>	/* For write, close */
#include <stdlib.h>	/* For NULL */

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file for writing and append */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If no text content, just return success */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculate the length of text_content */
	while (text_content[length])
		length++;

	/* Write to the file */
	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1 || bytes_written != (ssize_t)length)
	{
		close(fd);
		return (-1);
	}

	/* Close the file */
	close(fd);

	return (1);
}

