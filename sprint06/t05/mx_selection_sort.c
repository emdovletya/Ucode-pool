int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
    int c = 0;
    int min;
    char *tmp;

    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++)
            if ((mx_strlen(arr[j]) < mx_strlen(arr[min]))
                || (mx_strlen(arr[j]) - mx_strlen(arr[min]) == 0
                    && mx_strcmp(arr[j], arr[min]) < 0))
                min = j;
            if (min != i) {
            tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
            c++;
        }
    }
    return c;
}
