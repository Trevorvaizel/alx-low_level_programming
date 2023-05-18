#include "main.h"

/**
 * read_textfile - reads textfile and prints
 * @filename: pointer to file
 * @letters: number of letters
 *
 * Return: 0 incase of errors and letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescriptor;
	ssize_t i;
	char *buffer;
	ssize_t bytesRead;

	if (filename == NULL)
	{
		return (0);
	}

	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
		return (0);

	buffer = malloc((letters) * sizeof(char));

	if (buffer == NULL)
	{
		return (0);
	}
	bytesRead = read(filedescriptor, buffer, letters);

	if (bytesRead == -1)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < bytesRead; i++)
		{
			putchar(buffer[i]);
		}
	}
	close(filedescriptor);
	return (bytesRead);
}
