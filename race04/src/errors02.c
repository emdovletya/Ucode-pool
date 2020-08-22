#include "../inc/header.h"

void mx_route_not_found() {
    mx_printerr(ROUTE_NOT_FOUND);
    mx_printerr("\n");
}

void mx_error() {
    mx_printerr(ERROR);
    mx_printerr("\n");
}

void mx_map_error() {
    mx_printerr(MAP_ERROR);
    mx_printerr("\n");
}
