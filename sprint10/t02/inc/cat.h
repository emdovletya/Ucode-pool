#ifndef CAT_H
#define CAT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>
#include <string.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
char *mx_strchr(const char *s, int c);

#endif
