#include "../inc/header.h"

t_size *mx_check_size(char *filename) {
    char buffer;
    t_size *maze = (t_size *)malloc(sizeof(t_size));
    int fd = open(filename, O_RDONLY);
    int sz = 0;
    int mazeprev = 0;

    maze->lines = 0;
    maze->col = 0;
    sz = read(fd, &buffer, 1);
    while (sz > 0) {
        if (buffer == '\n') {
            maze->lines++;
            if (maze->lines == 0)
                mazeprev = maze->col; 
        }
        else if (buffer != ',')
            maze->col++;
        sz = read(fd, &buffer, 1);
    }
    maze->col /= maze->lines;
    close(fd);
    return maze;
}

char *mx_swap(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '#') str[i] = '1';
        if (str[i] == '.') str[i] = '2';
    }
    return str;
}

void mx_form_array(char *filename, int **arr, t_size *maze) {
    char *str = mx_file_to_str(filename);
    mx_swap(str);
    for (int i = 0; i < maze->lines; i++) {
         for (int j = 0; j < maze->col; j++) {
             arr[i][j] = str[j] - 48;
             arr[i][j] = -arr[i][j];
             str++;
         }
         str += maze->col;
     }
}

char *mx_int_buffer_to_char(int arr, char *buffer) {
    if (arr == -1) 
        *buffer = 35;
    if (arr == -2) 
        *buffer = 46;
    if (arr == -5) 
        *buffer = 68;
    if (arr == -8) 
        *buffer = 88;
    if (arr == -9) 
        *buffer = 42;
    return buffer;
}

void mx_write_to_txt(int **arr, t_size *maze) {
    char buffer;
    char ent = '\n';
    int target;

    target = open("path.txt", O_WRONLY | O_CREAT | O_TRUNC
    , S_IWUSR | S_IRUSR);
    if (target == -1) {
        mx_error();
    }
    for (int i = 0; i < maze->lines; i++) {
        for (int j = 0; j < maze->col; j++) {
            mx_int_buffer_to_char(arr[i][j] ,&buffer);
            write(target, &buffer, 1);
        }
        write(target, &ent, 1);
    }
}
