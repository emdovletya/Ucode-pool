#include "../inc/header.h"

char *mx_strcat(char *s1, const char *s2) {
    int i = mx_strlen(s1);
    int j;

    for (j = 0; s2[j]; j++)
        s1[i + j] = s2[j];
    s1[i + j] = '\0';
    return s1;
}
