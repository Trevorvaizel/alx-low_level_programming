#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: pointer to file path
 * @text_content: text to append
 *
 * Return: 1, -1 on success and faliure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fileDescriptor;
	ssize_t bytesWritten;
	ssize_t contentLegnth = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
	if (fileDescriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		contentLegnth = strlen(text_content);
	}
	bytesWritten = write(fileDescriptor, text_content, contentLegnth);
	if (bytesWritten == -1)
	{
		return (-1);
	}
	close(fileDescriptor);

	return (1);
}
