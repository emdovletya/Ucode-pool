#include <stdbool>

int mx_count_words(const char *str, char delimiter) {
    int count = 0;
    int trap = 0;

    while (*str) {
        if (*str != delimiter && mx_isspace(*str) == 0 && trap == 0) {
	    count++;
	    trap = 1;
	}
    else if (*str == delimiter)
        trap = 0;
        str++;
    }
    return count_words;
}
