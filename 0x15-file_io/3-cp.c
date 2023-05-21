#inlcude "main.h"

/**
 * main: checks for errors and then executes
 * @argc: argument counts
 * @argv: pointer to argument vector
 *
 * Return: 0 on success, -1 on faliure
 *
 */

int main (int argc, char *argv[])
{
	if(argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file to");
		return (97);
	}

	if(argv[1] == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	read_func(arg[1]);
	write_func(arg[1], arg[2]);

	return (0);
}

/**
 * read_func - reads from file_fro
 * @file_from: where from
 *
 * Return: pointer to BUFFER
 */

char *read_func(const char *file_from)
{
	int fileDescriptor;
	ssize_t bytesRead;
	size_t contentLength;
	char *buffer;

	fileDescriptor = open(file_from, O_RDONLY);
	if (fileDescriptor == -1)
	{
		fprintf(stderr, "Error: Can't read from fiile %s", file_from);
		return (98);
	}

	contentLength = strlen(file_from);
	buffer = malloc((contentLength + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Failed to allocate memory \n");
		close(fileDescriptor);
		return (99);
	}

	bytesRead = read(fileDescriptor, buffer, contentLength);
	if (bytesRead == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		close(fileDescriptor);
		return (98);
	}
	buffer[bytesRead] = '\0';
	close(fileDescriptor);

	return(buffer);
}

/**
 * write_func - writes from buffer to file_to
 * @file_to: name of file
 *
 * Return: bytesWritten
 *
 */

int write_func(const char *file_from, const char *file_to)
{
	int fileDescriptor;
	ssize_t bytesWritten;
	ssize_t content length;
	char *buffer = read_func(file_from);

	fileDescriptor = open(file_to, O_WRONLY | O_TRUNC | O_CREAT);
	if (fileDescriptor == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		close(fileDescriptor);
		return (99);
	}
	bytesWritten = write(fileDescriptor, buffer, contentLength);
	if (bytesWritten == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		close(fileDecsriptor);
		return (99);
	}

	close(fileDescriptor);

	return (bytesWritten);
}
