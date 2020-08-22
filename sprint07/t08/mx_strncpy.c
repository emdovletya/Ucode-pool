#include<stdio.h>
#include<string.h>

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;
    char *res = dst;

    while (*src && i++ < len && (*dst++ = *src++));
    if (i < len)
        *dst = '\0';
    return res;
}
