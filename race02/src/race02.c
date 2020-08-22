#include "calculator.h"

int res(int num1, int num2, char operation) {
    if (operation == '+')
        return num1 + num2;
    if (operation == '-')
        return num1 - num2;
    if (operation == '/')
        return num1 / num2;
    if (operation == '*')
        return num1 * num2;
    return 0;
}

int q_num(char *s) {
    int i = 0;
    int counter = 0;
    int result = 1;

    while(s[i])
    {
        if(s[i] == '?')
            counter++;
        i++;
    }
    
    if (counter == 1)
        return 0;

    for (int j = 1; j < counter; j++)
        result *= 10;

        return result;
}

char sign(char *s) {
    int i = 0;

    while(s[i])
    {
        if(s[i] == '+')
            return '+';
        if(s[i] == '-')
            return '-';
        if(s[i] == '/')
            return '/';
        if(s[i] == '*')
            return '*';
    }

    return '+';
}

int main(int argc, char **argv) {
    if (argc == 0)
        return 1;
     
    int num1;
    int num2;

    int qnum1 = 0;
    int qnum2 = 0;

    if (mx_atoi(argv[1]))
        num2 = mx_atoi(argv[1]);
    else {
        num1 = q_num(argv[1]);
        qnum1++;
}

    if (mx_atoi(argv[3]))
        num2 = mx_atoi(argv[3]);
        else {
            num2 = q_num(argv[3]);
            qnum2++;
}

for (int i = 0; i < 10; i++) {
    mx_printint(num1);
    mx_printchar(' ');
    mx_printstr(argv[2]);
    mx_printchar(' ');
    mx_printint(num2);
    mx_printchar(' ');
    mx_printchar('=');
    mx_printchar(' ');
    mx_printint(res(num1, num2, sign(argv[2])));
    mx_printchar('\n');

    if (qnum1)
        num1++;
    if (qnum2)
        num2++;
    }
    return 0;
}    
