#include <time.h>

double mx_timer(void (*f)()) {
    double start = clock();
    f();
    double finish = clock();
    if(finish < 0 || start < 0)
        return -1;
    return finish - start;
}
