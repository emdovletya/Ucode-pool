#include <stdio.h>

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    char *temp;
    int count = 0;
    int j;

    for (int i = 1; i < size; ++i) {
	temp = arr[i];
	j = i - 1;
	while (j >= 0 && (mx_strlen(arr[j]) > mx_strlen(temp))) {
	    arr[j + 1] = arr[j];
	    j--;
            ++count;
	}
	arr[j + 1] = temp;
    }
    return count;
}
