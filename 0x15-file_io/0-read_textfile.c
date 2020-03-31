#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX (Portable Operating System Interface (IX)) standard output.
 * @filename: name of file in string
 * @letters: number of letters to read from file
 * Return: the actual number of letters it could read and print.
 * If the file can not open or read, returns 0
 * If the filename is NULL, returns 0
 * If write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *content;
	int fd, rd;
	unsigned long int ctnt_len;
	long int wrt;

	if (filename == NULL)
		return (0);
	content = malloc((letters + 1) * sizeof(char *));
	if (content == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, content, letters);
	if (rd == -1)
		return (0);
	content[letters] = '\0';

	for (ctnt_len = 0; content[ctnt_len]; ctnt_len++)
		;
	wrt = write(STDOUT_FILENO, content, ctnt_len);

	if (wrt == -1)
	{
		return (0);
	}
	if (close(fd) == -1)
	{
		return (0);
	}
	free(content);
	return (wrt);
}
