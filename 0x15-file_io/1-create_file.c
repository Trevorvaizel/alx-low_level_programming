#include "main.h"

/**
 * create_file - creates new file
 * @filename: pointer to file path
 * @text_content: what to be written
 *
 * Return: 0, -1 on success or faliure
 *
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fileDescriptor;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fileDescriptor == -1)
	{
		return (-1);
	}
	bytesWritten = write(fileDescriptor, text_content, strlen(text_content));
	if (bytesWritten == -1)
	{
		return (-1);
	}
	close(fileDescriptor);

	return (0);
}
