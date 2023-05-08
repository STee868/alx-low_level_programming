#include "main.h"
#include <stdio.h>

/**
 * copy_file - Copies the content of a file to another file
 * @file_from: The source file
 * @file_to: The destination file
 *
 * Return: 0 on success, otherwise -1
 */
int copy_file(const char *file_from, const char *file_to)
{
    int fd_from, fd_to, close_from, close_to;
    ssize_t bytes_read, bytes_written;
    char buffer[1024];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return (-1);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(fd_from);
        return (-1);
    }

    while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read || bytes_written == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(fd_from);
            close(fd_to);
            return (-1);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(fd_from);
        close(fd_to);
        return (-1);
    }

    close_from = close(fd_from);
    if (close_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        close(fd_to);
        return (-1);
    }

    close_to = close(fd_to);
    if (close_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        return (-1);
    }

    return (0);
}

