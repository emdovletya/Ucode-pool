#include "../inc/header.h"

char *mx_strtrim(const char *str) {
    char *endl;
    int sp = 0;
    char *res;

    if (!str)
        return NULL;
    while (*str && mx_isspace(*str)) {
        str++;
    }
    if (*str == 0)
        return mx_strnew(0);
    endl = (char *)str + mx_strlen(str) - 1;
    while ((endl > str) && mx_isspace(*endl)) {
        endl--;
        sp++;
    }
    res = mx_strnew(mx_strlen(str) - sp);
    if (!(res = mx_strncpy(res, str, mx_strlen(str) - sp)))
        return NULL;  
    return res;
}
