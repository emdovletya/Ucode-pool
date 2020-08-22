#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

bool mx_islower(int c) {
    if ('a' <= c && c <= 'z')
        return 1;
    else
        return 0;
}
