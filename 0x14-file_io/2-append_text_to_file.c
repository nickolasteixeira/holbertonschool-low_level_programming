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

#include "holberton.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file to create
 * @text_content: content to append to the end of the file
 *
 * Return: 1 if successful, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, actual_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	size = _strlen(text_content);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	actual_write = write(fd, text_content, size);
	if (actual_write == -1)
		return (-1);

	close(fd);
	return (1);
}
