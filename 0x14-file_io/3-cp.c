#include "holberton.h"
/**
 * print_error_98 - prints an error message
 * @file_from: the file name to print
 * Return: void;
 */
void print_error_98(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}
/**
 * print_error_99 - prints an error message
 * @file_to: the file name to print
 * Return: void;
 */
void print_error_99(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * print_error_100 - prints an error message
 * @fd: the file descriptor to print
 * Return: void;
 */
void print_error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * read_a_textfile - reads a file, then makes a copy to another file
 * @file_from: the file to read from
 * @file_to: the name of the file to copy to
 *
 * Return: 1 if successful
 */
void read_a_textfile(char *file_from, char *file_to)
{
	int fd_to, fd_from, actual_read, actual_write;
	char buff[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_98(file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC,
			(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
	if (fd_to == -1)
		print_error_99(file_to);

	/* reading file 1024 bytes at a time */
	while ((actual_read = read(fd_from, buff, 1024)) > 0)
	{
		if (actual_read == -1)
			print_error_98(file_from);
		/* writing to the filename you wanted to create at 1024 bytes at a time */
		actual_write = write(fd_to, buff, actual_read);
		if (actual_write == -1)
			print_error_99(file_to);
	}
	/*checking if the condition statement for the while loop errors */
	if (actual_read == -1)
		print_error_98(file_from);
	/*closing the file and checking for edgecases */
	if (close(fd_to) == -1)
		print_error_100(fd_to);
	if (close(fd_from) == -1)
		print_error_100(fd_from);
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
