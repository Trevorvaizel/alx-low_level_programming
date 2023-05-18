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
	ssize_t contentLegnth = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		contentLegnth = strlen(text_content);
	}

	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fileDescriptor == -1)
	{
		return (-1);
	}
	bytesWritten = write(fileDescriptor, text_content, contentLegnth);
	if (bytesWritten == -1)
	{
		return (-1);
	}
	close(fileDescriptor);

	return (1);
}
