#ifndef HEADER_H
#define HEADER_H

#define MAX_LINES 4
#define PHRS 6

#include <curses.h>
#include <ncurses.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

typedef struct r_list {
    int *arr;
    struct r_list *next;
}              list;


typedef struct r_scr {
    char **map;
    list **rain;
    int WIDTH;
    int HEIGHT;
}			   scr;

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strcmp(const char *s1, const char *s2);
bool to_lowercase(char *str);
int get_color(char *str);

list *create_node(int y);
void add_back(list **head);
void mx_pop_front(list **head);
int mx_list_size(list *head);

void intro_scene();
void rain_scene();

#endif
