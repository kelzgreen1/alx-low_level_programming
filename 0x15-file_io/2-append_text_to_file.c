#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
		int fd, len = 0;
		long int wrote;

		if (filename == NULL)
		return (-1);
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
		return (-1);
		if (text_content != NULL)
		{
		while (text_content[len])
		len++;

		wrote = write(fd, text_content, len);
		if (wrote == -1)
		return (-1);
		}
		if (close(fd) == -1)
		return (-1);
		return (1);
}
