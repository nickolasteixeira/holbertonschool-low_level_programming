#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void print_error_98(char *file_from);
void print_error_99(char *file_to);
void print_error_100(int fd);
void read_a_textfile(char *file_from, char *file_to);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /* _HOLBERTON_H_ */
