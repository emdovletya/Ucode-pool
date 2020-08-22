#include "duplicate.h"

int *mx_copy_int_arr(const int *src, int size) {
    int *arr;

    if (size < 0 || src == NULL || !(arr = (int *)malloc(sizeof(int) * size)))
        return NULL;
    for (int i = 0; i < size; i++)
        arr[i] = src[i];
    return arr;
}
