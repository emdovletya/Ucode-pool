#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mx_strdel(char **str);
int	mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strjoin(const char *s1, const char *s2);

char *mx_concat_words(char **words) {
	int i = 0;
	char *res = "";

	if (words == NULL)
        return NULL;
    while (words[i]) {
        res = mx_strjoin(res, words[i]);
		if (words[i + 1] != NULL) 
		    res = mx_strjoin(res, " ");
        i++;
    }
    return res;
}
