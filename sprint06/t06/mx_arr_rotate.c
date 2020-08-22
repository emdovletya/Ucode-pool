#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift) {
    int temp;

    if (shift < 0)
	shift = size + shift;
    for (int i = 0; i < shift; ++i) {
	temp = arr[size - 1];
	for (int j = size - 1; j > 0; --j)
	    arr[j] = arr[j - 1];
	arr[0] = temp;
    }
}

int main(void) {
int arr[] = {1, 2, 3, 4, 5};
mx_arr_rotate(arr, 5, 2);
for (int i = 0; i < 5; i++) {
	printf("%d", arr[i]);
	}
} 
