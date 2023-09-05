#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read = 0;
	char buffer[1024];

	if (!filename)
		return 0;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return 0;

	while (letters > 0 && (bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0)
	{
		buffer[bytes_read] = '\0';
		if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
		{
			close(fd);
			return 0;
		}
		letters -= bytes_read;
	}

	close(fd);

	if (bytes_read == -1)
		return 0;

	return (ssize_t)(letters - bytes_read);
}
