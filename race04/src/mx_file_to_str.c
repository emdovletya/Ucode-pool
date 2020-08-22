#include "../inc/header.h"

char *mx_file_to_str(const char *filename) {
    int fd = open(filename, O_RDONLY);
    char buf;
    char *str;
    int len = 0;

    if (fd > 0) {
        while (read(fd, &buf, 1))
            len++;
        close(fd);
        if (len > 0) {
            fd = open(filename, O_RDONLY);
            str = mx_strnew(len);
            for (int i = 0; read(fd, &buf, 1); i++)
                str[i] = buf;
            close(fd);
            return str;
        }
    }
    return NULL;
}
