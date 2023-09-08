#include <stdlib.h>
#include "main.h"

/**
 * openSourceFile - Opens the source file and returns the file descriptor.
 * @filename: The name of the source file.
 * Return: The file descriptor on success, or -1 on failure.
 */
int openSourceFile(const char *filename)
{
	int sourceFileDescriptor = open(filename, O_RDONLY);

	if (sourceFileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (sourceFileDescriptor);
}

/**
 * openDestinationFile - Opens the destination file and
 * returns the file descriptor.
 * @filename: The name of the destination file.
 * Return: The file descriptor on success, or -1 on failure.
 */
int openDestinationFile(const char *filename)
{
	int destinationFileDescriptor = open(filename
			, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (destinationFileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (destinationFileDescriptor);
}

/**
 * copyFile - Copies the content from the source file to the destination file.
 * @sourceFd: The file descriptor of the source file.
 * @destinationFd: The file descriptor of the destination file.
 */
void copyFile(int sourceFd, int destinationFd)
{
	char buffer[1024];
	ssize_t bytesRead, bytesWritten;

	while ((bytesRead = read(sourceFd, buffer, 1024)) > 0)
	{
		bytesWritten = write(destinationFd, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			exit(99);
		}
	}

	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		exit(98);
	}
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	int sourceFileDescriptor = openSourceFile(av[1]);
	int destinationFileDescriptor = openDestinationFile(av[2]);

	copyFile(sourceFileDescriptor, destinationFileDescriptor);

	if (close(sourceFileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close source file descriptor\n");
		exit(100);
	}

	if (close(destinationFileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close destination file descriptor\n");
		exit(100);
	}

	return (0);
}
