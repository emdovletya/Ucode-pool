#include <unistd.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    for (unsigned int count = 1; count <= length; count++) {
        for (unsigned int i = 0; i < count; i++)
            mx_printchar(c);
        mx_printchar('\n');
    }
}
