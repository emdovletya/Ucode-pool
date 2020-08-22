#include "list.h"

void mx_pop_index(t_list **list, int index) {
    t_list *n_node = *list;
    int n_index = 0;


    if (index < 1)
        mx_pop_front(&n_node);
    while (n_node) {
        if (n_index == index - 1) {
            free(n_node->next);
            n_node->next = n_node->next->next;
            n_index++;
        }
        else {
            n_node = n_node->next;
            n_index++;
        }
    }
    if (n_index < index)
        mx_pop_back(&n_node);
}
