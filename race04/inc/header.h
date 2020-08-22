#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
# include <stdio.h>

# define INVALID_USAGE "usage: ./race04 [file_name] [x1] [y1] [x2] [y2]"
# define MAP_NOT_EXIST "map does not exist"
# define MAP_ERROR "map error"
# define POINTS_OUT_OF_MAP "points are out of map range"
# define POINT_OBSTACLE "entry point cannot be an obstacle"
# define EXIT_POINT_OBSTACLE "exit point cannot be an obstacle"
# define ROUTE_NOT_FOUND "route not found"
# define ERROR "error"

typedef struct t_size {
  	int col;
  	int lines;
}			   t_size;

char *mx_strnew(const int size);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_file_to_str(const char *filename);
void mx_lee(int W, int H, int **map, int ax, int ay, int bx, int by);
int mx_strcmp(const char *s1, const char *s2);
void mx_strdel(char **str);
char *mx_strtrim(const char *str);
t_size *mx_check_size(char *filename);
void mx_form_array(char *filename, int **arr, t_size *maze);
char *mx_swap(char *str);
char *mx_int_buffer_to_char(int arr, char *buffer);
void mx_write_to_txt(int **arr, t_size *maze);
void mx_invalid_usage();
void mx_map_not_exist();
void mx_map_error();
void mx_points_out_of_map();
void mx_point_obstacle();
void mx_exit_point_obstacle();
void mx_route_not_found();
void mx_error();
bool mx_argc_num(int argc);
bool mx_is_map_exist(char argv[]);
bool mx_is_map_exist(char *filename);
bool mx_is_points_out_of_map(t_size *maze, char *arg1[]);
bool mx_is_point_obstacle(char *arg2, char *arg3, int **arr);
bool mx_is_exit_point_obstacle(char *arg4, char *arg5, int **arr);

#endif
