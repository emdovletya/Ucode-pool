#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str) {
    int i = 0;
    int res = 0;
    int sign = 1;

    while (mx_isspace(str[i]) || str[i] == '+')
        i++;
    if (str[i] == '-') {
        sign = -1;
        i++;
    }    
    while (mx_isdigit(str[i])) {
	res = res * 10 + (str[i] - 48);
	i++;
    }
    return res * sign;
}
