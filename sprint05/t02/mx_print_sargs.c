#include <unistd.h>
#include <stdio.h>
#include <string.h>

int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s2);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    char *temp = 0;
    for (int x = 1; x < argc; x++) {
        for (int y = 1; y < argc - x; y++) {
            if (mx_strcmp(argv[y], argv[y + 1]) > 0) {
                temp = argv[y];
                argv[y] = argv [y + 1];
                argv[y + 1] = temp;
            }
        }
    }
    if (argc >= 2) {
        for (int x = 1; x < argc; x++) {
            mx_printstr(argv[x]);
            mx_printchar('\n');
       }
    }
    else 
        return 0;
}
