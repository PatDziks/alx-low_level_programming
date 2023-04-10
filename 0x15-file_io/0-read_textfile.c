#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - reads a text file and prints the letters
  * @filename: filename.
  * @letters: numbers of letters printed.
  *
  * Return: numbers of letters printed. It fails, returns 0.
  */
 ssize_t read_textfile(const char *filename, size_t letters)

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }
    
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }
    
    char *buf = (char *) malloc(letters);
    if (buf == NULL) {
        close(fd);
        return 0;
    }
    
    ssize_t bytes_read = read(fd, buf, letters);
    if (bytes_read == -1) {
        close(fd);
        free(buf);
        return 0;
    }
    
    ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read) {
        close(fd);
        free(buf);
        return 0;
    }
    
    close(fd);
    free(buf);
    
    return bytes_written;
}

