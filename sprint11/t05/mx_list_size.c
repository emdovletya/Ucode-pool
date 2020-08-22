#include "list.h"

int mx_list_size(t_list *list) {
    int current = 0;
    t_list *temp = NULL;

    if (list) {
        temp = list;
        while (temp != NULL) {
            current++;
            temp = temp->next;
        }
    }
    return current;
}
