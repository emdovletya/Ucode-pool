int mx_popular_int(const int *arr, int size) {
    int c = 1;
    int maxcount = 1;
    int maxvalue = 0;
    int result = 0;

    for (int i = 0; i < size; i++) {
        maxvalue = arr[i];
    for (int j = 0; j < size; j++) {
        if (maxvalue == arr[j] && j != i) {
            c++;
            if (c > maxcount) {
                maxcount = c;
                result = arr[i];
            }
        }
        else
            c = 1;
    }
    }
    return result;
}    
