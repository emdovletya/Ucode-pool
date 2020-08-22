#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

void mx_printchar(char s);
void mx_printstr(const char *s);
void mx_printint(int num);
int mx_atoi(const char *str);
int res(int num1, int num2, char operation);
int q_num(char *s);
char sign(char *s);
int main(int argc, char **argv);

#endif
