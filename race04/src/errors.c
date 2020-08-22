#include "../inc/header.h"

void mx_invalid_usage() {
    mx_printerr(INVALID_USAGE);
    mx_printerr("\n");
}

void mx_map_not_exist() {
    mx_printerr(MAP_NOT_EXIST);
    mx_printerr("\n");
}

void mx_points_out_of_map() {
    mx_printerr(POINTS_OUT_OF_MAP);
    mx_printerr("\n");
}

void mx_point_obstacle() {
    mx_printerr(POINT_OBSTACLE);
    mx_printerr("\n");
}

void mx_exit_point_obstacle() {
    mx_printerr(EXIT_POINT_OBSTACLE);
    mx_printerr("\n");
}
