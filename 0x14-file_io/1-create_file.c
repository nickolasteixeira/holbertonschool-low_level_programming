#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find the length
 *
 * Return: length of the string int
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		++counter;
	}
	return (counter);
}
/**
 * create_file - creates a new file with the filename from filename, and
 * text_content of the contents of the file
 * @filename: name of the file to create
 * @text_content: pointer to the content of the text to copy to file
 *
 * Return: 1 if successfull, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size, actual_write;

	size = _strlen(text_content);
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, (S_IRUSR | S_IWUSR));
	if (fd == -1)
		return (-1);

	actual_write = write(fd, text_content, size);
	if (actual_write == -1)
		return (-1);

	close(fd);
	return (1);
}
