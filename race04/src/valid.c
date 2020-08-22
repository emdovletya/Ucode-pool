#include "../inc/header.h"

bool mx_argc_num(int argc) {
    if (argc == 6) return 1;
    else {
        mx_invalid_usage();
        return 0;
    }
}

bool mx_is_map_exist(char *filename) {
    int fl = open(filename, O_RDONLY);
    char buf;
    if (fl > 0 && (read(fl, &buf, 1)) > 0) {
        close(fl);
        return 1;
    }
    else {
        mx_map_not_exist();
        close(fl);
        return 0;
    }
}


bool mx_is_points_out_of_map(t_size *maze, char *arg[]) {
    if (mx_atoi(arg[2]) >= 0 && mx_atoi(arg[2]) <= maze->col 
        && mx_atoi(arg[3]) >= 0 && mx_atoi(arg[3]) <= maze->lines
        && mx_atoi(arg[4]) >= 0 && mx_atoi(arg[4]) <= maze->col 
        && mx_atoi(arg[5]) >= 0 && mx_atoi(arg[5]) <= maze->lines)
        return 1;
    else {
        mx_points_out_of_map();
        return 0;
    }
}

bool mx_is_point_obstacle(char *arg2, char *arg3, int **arr) {
    if (arr[mx_atoi(arg3)][mx_atoi(arg2)] != -1)
        return 1;
    else {
        mx_point_obstacle();
        return 0;
    }
    return 0;
}

bool mx_is_exit_point_obstacle(char *arg4, char *arg5, int **arr) {
    if (arr[mx_atoi(arg5)][mx_atoi(arg4)] != -1)
        return 1;
    else {
        mx_exit_point_obstacle();
        return 0;
    }
    return 0;
}
