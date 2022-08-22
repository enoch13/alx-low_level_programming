#include "main.h"

/**
 * create_file - create a file with read/write access
 * @filename: name of file to create
 * @text_content: string to write in file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
