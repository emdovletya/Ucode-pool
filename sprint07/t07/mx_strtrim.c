#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool mx_isspace(char c);
void mx_strdel(char **str);
int	mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
    char *end;
    int r_spc = 0;
    char *out;

    if (!str)
        return NULL;
    while (*str && mx_isspace(*str)) {
        str++;
    }
    if (*str == 0)
        return mx_strnew(0);
    end = (char *)str + mx_strlen(str) - 1;
    while ((end > str) && mx_isspace(*end)) {
        end--;
        r_spc++;
    }
    out = mx_strnew(mx_strlen(str) - r_spc);
    if (!(out = mx_strncpy(out, str, mx_strlen(str) - r_spc)))
        return NULL;  
    return out;
}
