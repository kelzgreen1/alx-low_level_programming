#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to be read and printed
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
			int fd, printed, wrote;
			char *buff;

			buff = malloc(letters);
			if (buff == NULL)
			return (0);

			if (filename == NULL)
			return (0);

			fd = open(filename, O_RDWR);
			if (fd == -1)
			return (0);

			printed = read(fd, buff, letters);
			if (printed == -1)
			return (0);

			wrote = write(STDOUT_FILENO, buff, printed);
			if (wrote == -1)
			return (0);

			if (close(fd) == -1)
			return (0);

			free(buff);
			return (printed);
}
