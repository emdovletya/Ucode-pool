#include "../inc/header.h"

int mx_strlen(const char *s) {
    int i = 0;

    while (s[i])
        i++;
    return i;
}

char *mx_strnew(const int size) {
    char *str = NULL;
    int i = 0;

    if (size < 0)
        return NULL;
    str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return NULL;
    while (i < size + 1){
        str[i] = '\0';
        i++;
    }
    return str;
}

char *mx_strcpy(char *dst, const char *src) {
    int count = 0;

    while (src[count]) {
        dst[count] = src[count];
        count++;
    }
    dst[count] = '\0';
    return dst;
}

char *mx_strdup(const char *str) {
    char *new_str = mx_strnew(mx_strlen(str));
 
    if (new_str == NULL)
    	return NULL;
    mx_strcpy(new_str, str);
    return new_str;
}

int mx_strcmp(const char *s1, const char *s2) {
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

bool to_lowercase(char *str) {
 	while (*str) {
    	if (*str >= 65 && *str < 91)
     		*str -= 32;
    	else
    		return false;
    	str++;
	}
  	return true;
}

int get_color(char *str) {
  	if (!mx_strcmp(str, "green"))
    	return 2;
  	return -1;
}
