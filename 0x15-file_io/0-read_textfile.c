#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf = NULL; // Initialize to NULL for proper cleanup
    ssize_t fd, w = 0, t;
    
    if (filename == NULL)
        return 0;
    
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;
    
    buf = malloc(sizeof(char) * letters);
    if (buf == NULL) {
        close(fd); // Close the file before returning
        return 0;
    }
    
    t = read(fd, buf, letters);
    if (t == -1) {
        free(buf); // Free memory before returning
        close(fd); // Close the file before returning
        return 0;
    }
    
    w = write(STDOUT_FILENO, buf, t);
    
    // Cleanup
    free(buf);
    close(fd);
    
    return (w);
}
