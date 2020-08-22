#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char *mx_strtrim(const char *str);
bool mx_isspace(char c);
void mx_strdel(char **str);
int	mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_del_extra_whitespaces(const char *str) {   
    char *new_str = mx_strtrim(str);
    char *res;
    int i = 0;
    int j = 0;

    while (new_str[i] != '\0') {
        if (mx_isspace(new_str[i])) {
            new_str[j] = ' ';
            j++;
            while (mx_isspace(new_str[i]))
                i++;
        }
        new_str[j++] = new_str[i++];
    }
    new_str[j] = '\0';
    res = mx_strnew(j);
    res = mx_strncpy(res, new_str, j + 1);
    mx_strdel(&new_str);
    return res;
}
