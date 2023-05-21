#include "main.h"

/**
 * main - checks for errors in program then executes
 * @argc: argument count
 * @argv: pointer to argument vector
 *
 * Return: 0 on success, -1 on faliure
 *
 */

int main(int argc, char *argv[])
{
    int fileDescriptor;
    ssize_t bytesRead, bytesWritten;
    ssize_t contentLength = 0;
    char *buffer;

    if (argc != 3)
    {
        fprintf(stderr, "Error: Usage: cp file_from file_to\n");
        return 97;
    }

    if (argv[1] == NULL)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    fileDescriptor = open(argv[1], O_RDONLY);
    if (fileDescriptor == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    if (argv[1] != NULL)
    {
        contentLength = strlen(argv[1]);
    }

    buffer = malloc((contentLength + 1) * sizeof(char));
    if (buffer == NULL)
    {
        fprintf(stderr, "Error: Failed to allocate memory\n");
        close(fileDescriptor);
        return 99;
    }

    bytesRead = read(fileDescriptor, buffer, contentLength);
    if (bytesRead == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        free(buffer);
        close(fileDescriptor);
        return 98;
    }
    buffer[bytesRead] = '\0';

    close(fileDescriptor);

    fileDescriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fileDescriptor == -1)
    {
        fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
        free(buffer);
        return 99;
    }

    bytesWritten = write(fileDescriptor, buffer, bytesRead);
    if (bytesWritten == -1)
    {
        fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
        free(buffer);
        close(fileDescriptor);
        return 99;
    }

    close(fileDescriptor);
    free(buffer);

    return 0;
}
