#include "holberton.h"
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
	char *buff;

	if (filename == NULL)
		return (0);

	/* open the filename, set it to Read Only */
	fd = open(filename, O_RDONLY, S_IRUSR);
	if (fd < 0)
		return (0);

	/* malloc for some more memory store the file contents to the buff */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	/* copying all the contents in filename to the buff up to the letters */
	actual_read = read(fd, buff, letters);
	if (actual_read == -1)
		return (0);

	buff[actual_read] = '\0';
	write(STDOUT_FILENO, buff, actual_read); 
	close(fd);
	free(buff);
	return (actual_read);
}
