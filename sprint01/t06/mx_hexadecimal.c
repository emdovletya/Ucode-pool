#include <unistd.h>

void mx_printchar(char c); 
void mx_hexadecimal(void) {
    for (int i = 48; i <= 57; i++)
        mx_printchar(i);
    for (int j = 65; j <= 70; j++)
        mx_printchar(j);
}
