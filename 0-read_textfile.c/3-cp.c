#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

void error_exit(const char *error_message)
{
    dprintf(STDERR_FILENO, "%s\n", error_message);
    exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
    int file_from_descriptor, file_to_descriptor;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit("Usage: cp file_from file_to");

    file_from_descriptor = open(argv[1], O_RDONLY);
    if (file_from_descriptor == -1)
        error_exit("Error: Can't read from file");

    file_to_descriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to_descriptor == -1)
        error_exit("Error: Can't write to file");

    while ((bytes_read = read(file_from_descriptor, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(file_to_descriptor, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
            error_exit("Error: Can't write to file");
    }

    if (bytes_read == -1)
        error_exit("Error: Can't read from file");

    if (close(file_from_descriptor) == -1)
        error_exit("Error: Can't close file descriptor");

    if (close(file_to_descriptor) == -1)
        error_exit("Error: Can't close file descriptor");

    return (EXIT_SUCCESS);
}
