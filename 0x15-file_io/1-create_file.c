#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: pointer to the file
 * @text_content: a pointer to the content of the file
 * Return: 1 if seccess
 * or -1 if filename is NULL
 * or -1 if text_content is NULL create an empty file
 * or -1 if failed
*/
int create_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t byte_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_len = 0;
		while (text_content[text_len] != '\0')
			text_len++;
		byte_wr = write(fd, text_content, text_len);
		if (byte_wr == -1 || byte_wr != text_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
