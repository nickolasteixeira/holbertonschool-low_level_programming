#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file to read and print
 * @letters: amount of letters to print to the STDOUT_FILENO
 *
 * Return: actual number of bytes read on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, actual_read;
	size_t i;
	char *buff;

	if (filename == NULL)
		return (0);

	/* open the filename, set it to Read Only */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	/* malloc for some more memory store the file contents to the buff */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	/* copying all the contents in filename to the buff up to the letters */
	actual_read = read(fd, buff, letters);

	/*looping through and printing them to the console */
	i = 0;
	while (i < letters)
	{
		_putchar(buff[i]);
		++i;
	}

	close(fd);
	free(buff);
	return (actual_read);
}
