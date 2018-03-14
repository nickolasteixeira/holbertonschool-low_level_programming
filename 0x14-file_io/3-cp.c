#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_a_textfile - reads a file, then makes a copy to another file
 * @file_from: the file to read from
 * @file_to: the name of the file to copy to
 *
 * Return: 1 if successful
 */
int read_a_textfile(char *file_from, char *file_to)
{
	int fd_to, fd_from, actual_read;
	char buff[1024];

	/* opening files from the arguments we passed to the function */
	fd_from = open(file_from, O_RDWR);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC,
			(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	/* reading file 1024 bytes at a time */
	while ((actual_read = read(fd_from, buff, 1024)) > 0)
	{
		if (actual_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		/* writing to the filename you wanted to create at 1024 bytes at a time */
		actual_read = write(fd_to, buff, actual_read);
		if (actual_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	/*closing the file and checking for edgecases */
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (1);
}
/**
 * main - calls the read_a_textfile function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0;
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	read_a_textfile(argv[1], argv[2]);
	return (0);
}
