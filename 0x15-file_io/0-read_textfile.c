#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: pointer to the file
 * @letters: the amount of letters to read and print
 * Return: the number of letters it did read and printed
 * or 0 if filename is NULL
 * or 0 if the file can not be opened or read
 * or 0 if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, byte_rd, byte_wr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (letters == 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	byte_rd = read(fd, buffer, letters);
	byte_wr = write(STDOUT_FILENO, buffer, byte_rd);
	close(fd);
	free(buffer);
	return (byte_wr);
}
