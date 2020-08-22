#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2) {
    char *new;
    int n1;
    int n2;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL)
        return mx_strdup(s2);
    else if (s2 == NULL)
        return mx_strdup(s1);
    else {
        n1 = mx_strlen(s1);
        n2 = mx_strlen(s2);
        new = mx_strnew(n1 + n2);
        new = mx_strcpy(new, s1);
        new = mx_strcat(new, s2);
     }
     return new;
}
