#include <unistd.h>
#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
bool mx_isdigit(int c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    int x = 0;
    int y = 0;
    int z = 0;

    x = mx_atoi(argv[1]);
    y = mx_atoi(argv[2]);

    if (argc != 3 || x > 9 || y > 9)
        return 0;

    if (x == y) {
        mx_printint(x * y);
        mx_printchar('\n');
    }
    else {

        if (x > y) {
            z = x;
            x = y;
            y = z;
        }

        for (int i = x; i <= y; i++) {
            for (int j = x; j <= y; j++) {
                mx_printint(i * j);
                mx_printchar('\t');
            }
            mx_printchar('\n');
        }
        return 0;
    }
}
