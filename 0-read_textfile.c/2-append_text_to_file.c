#include <unistd.h>
#include <fcntl.h>
#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor, bytes_written;
    size_t text_length = 0;

    if (filename == NULL)
        return (-1);

    file_descriptor = open(filename, O_WRONLY | O_APPEND);
    if (file_descriptor == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[text_length] != '\0')
            text_length++;

        bytes_written = write(file_descriptor, text_content, text_length);
        if (bytes_written == -1 || bytes_written != (int)text_length)
        {
            close(file_descriptor);
            return (-1);
        }
    }

    close(file_descriptor);
    return (1);
}
