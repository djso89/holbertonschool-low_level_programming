#include "holberton.h"
/**
 * check97 - function that checks for error exit97
 * @ac: number of arguments
 * Return: Nothing
 */
void check97(long int ac)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check98 - function that checks for error exit98
 * @filedes: file descriptor
 * @file: name of the file
 * Return: Nothing
 */
void check98(long int filedes, char *file)
{
	if (filedes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}
/**
 * check99 - function that checks for error exit99
 * @filedes: file descriptor
 * @file: name of the file
 * Return: Nothing
 */
void check99(long int filedes, char *file)
{
	if (filedes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

/**
 * check100 - function that checks for error exit100
 * @filedes: file descriptor
 * @fd: file destination
 * Return: Nothing
 */
void check100(long int filedes, long int fd)
{
	if (filedes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd);
		exit(100);
	}
}
/**
 * main - a program that copies the content of a file to another file
 * @argc: argument count
 * @argv: arguments from input
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	long int fd1, fd2;
	char *file_from, *file_to;
	char content[1024];
	long int rd, wrt, cl1, cl2;

	check97(argc);

	file_from = argv[1];
	fd1 = open(file_from, O_RDONLY);
	check98(fd1, file_from);

	file_to = argv[2];
	fd2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	check99(fd2, file_to);

	rd = read(fd1, content, 1024);
	check98(rd, file_from);

	wrt = write(fd2, content, rd);
	check99(wrt, file_to);

	if (rd != wrt)
		check99((-1), file_to);
	cl1 = close(fd1);
	check100(cl1, fd1);
	cl2 = close(fd2);
	check100(cl2, fd2);

	return (0);
}
