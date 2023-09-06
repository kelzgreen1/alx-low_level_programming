#include <stdio.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to append to
 * @text_content: NULL terminated string to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	return (-1);

	FILE *file = fopen(filename, "a");

	if (file == NULL)
	return (-1);

	if (text_content != NULL)
	fprintf(file, "%s", text_content);

	fclose(file);
	return (1);
}
