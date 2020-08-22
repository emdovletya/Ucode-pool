#ifndef CHOISE.H
#define CHOISE.H

#include <stdio.h>

char *mx_strcpy(char *dst, const *str);
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *str);

typedef char t_phrase;

#define *MX_SUCCESS_PHRASE = "Follow me!";
#define *MX_FAIL_PHRASE ="Perhaps i was wrong about you,Neo";
#define *MX_UNDEFINED_PHRASE ="Are you sure about that?";

#define MX_REDPILL 1;
#define MX_BLUE_PILL 0;

#endif
