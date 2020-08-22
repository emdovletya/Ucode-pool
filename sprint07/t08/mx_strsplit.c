#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
int mx_count_words(const char *str, char delimiter);

static int mx_count_char(const char *str, char delim) {
    int count = 0;

    while (*str && *str != delim) {
        count++;
        str++;
    }
    return count;
}

static void split(char **res, const char *s, char c) {
    int count_ch;
    int i = 0;
    int j = 0;
    int k;

    while (s[i] != '\0') {
        if (s[i] == c)
            i++;
        else {
            count_ch = mx_count_char(&s[i], c);
            res[j] = mx_strnew(count_ch);
            for (k = 0; k < count_ch; k++)
                res[j][k] = s[i++];
            j++;
        }
    }
    res[j] = NULL;
}

char **mx_strsplit(char const *s, char c) {
    char **res;

    if (!s)
        return NULL;    
    res = (char**)malloc(sizeof(char*) * (mx_count_words(s, c) + 1));
    split(res, s, c);
    return res ? res : NULL;
}
