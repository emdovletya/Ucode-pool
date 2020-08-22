#include <unistd.h>

void mx_printchar();

void mx_print_alphabet(void) {

    write(1, "AbCdEfGhIjKlMnOpQrStUvWxYz\n", 28);
}
