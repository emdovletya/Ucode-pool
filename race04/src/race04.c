#include "../inc/header.h"

static bool check01(int argc, char **argv) {
    if (mx_argc_num(argc) && mx_is_map_exist(argv[1]))
        return 1;
    else
        return 0;
}
static bool check02(char **argv, t_size *s) {
    if (mx_is_points_out_of_map(s, argv))
        return 1;
    else
        return 0;
}

static bool check03(char **argv, int **arr) {
    if (mx_is_point_obstacle(argv[2], argv[3], arr) 
        && mx_is_exit_point_obstacle(argv[4], argv[5], arr))
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[]) {
    if (check01(argc, argv)) {
        t_size *s = mx_check_size(argv[1]);
        if (check02(argv, s)) {
                int **arr = (int **)malloc(sizeof(int*)*s->lines);
                for (int i = 0; i < s->lines; i++)
                    arr[i] = (int *)malloc(sizeof(int)*s->col);
                mx_form_array(argv[1], arr, s);
            if (check03(argv, arr)) {
                mx_lee(s->col, s->lines, arr, mx_atoi(argv[2]), 
                mx_atoi(argv[3]), mx_atoi(argv[4]), mx_atoi(argv[5]));
                mx_write_to_txt(arr, s);
            }
        }
    }
    return 0;
}
