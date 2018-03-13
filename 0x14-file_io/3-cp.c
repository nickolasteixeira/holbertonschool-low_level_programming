#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int read_a_textfile(const char *file_from, char *file_to)
{
	int fd_to, fd_from, actual_read, actual_write;
	char *buff;

	/* opening files from the arguments we passed to the function */
	fd_from = open(file_from, O_RDWR);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 
			(S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)); 
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);		
	}

	/* creating a buffer to store information to write to the new file */
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		return (0);

	/* reading file 1024 bytes at a time */
	actual_read = read(fd_from, buff, 1024);
	if (actual_read == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit(98);	
	}
	/* writing to the filename you wanted to create at 1024 bytes at a time */
	actual_write = write(fd_to, buff, 1024);
	if (actual_write == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Can't write %s\n", file_to);
		exit(99);
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

	/* freeing the buffer from the heap */
	free(buff);
	return (1);

}	
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s", argv[1], argv[2]);
		exit(97);
	}

	read_a_textfile(argv[1], argv[2]);
	/* some condition to check if returned properply */
	

	return (0);
}
