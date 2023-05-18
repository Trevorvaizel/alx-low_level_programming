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
	if (filename == NULL)
	{
		return (0);
	}
	/** open file */
	int filedescriptor = open(filename, O_RDONLY);
	ssize_t i;
	/** check for success */
	if (filedescriptor == -1)
		return (0);
	/** read file and store result in buffer */
	char *buffer = malloc((letters) * sizeof(char));

	if (buffer == NULL)
	{
		return (0);
	}
	ssize_t bytesRead = read(filedescriptor, buffer, letters);

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
		putchar('\n');
	}
	close(filedescriptor);
	return (bytesRead);
}
