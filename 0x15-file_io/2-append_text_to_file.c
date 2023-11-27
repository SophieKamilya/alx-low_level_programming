#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: pointer to the file
 * @text_content: a pointer to the content of the file
 * Return: 1 if success
 * or -1 if filename is NULL
 * or -1 if the file does not exist
 * or -1 if we do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len_text;
	ssize_t byte_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len_text = 0;
		while (text_content[len_text] != '\0')
			len_text++;
		byte_wr = write(fd, text_content, len_text);
		if (byte_wr == -1 || byte_wr != len_text)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
