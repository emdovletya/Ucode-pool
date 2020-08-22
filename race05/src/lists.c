#include "../inc/header.h"

list *create_node(int y) {
    list *node = (list *)malloc(sizeof(list));
    int *arr = (int *)malloc(6 * sizeof(int));

    arr[0] = y;
    arr[1] = arr[0] - 1;
    arr[2] = arr[1] - 1;
    arr[3] = arr[2] - 2;
    arr[5] = arr[3] - rand() % 20;
    arr[4] = (arr[5] + arr[3]) / 2;
    node->arr = arr;
    node->next = NULL;
    return node;
}

void add_back(list **head) {
    int ay = (rand() % 40 + 4) * -1;

    if (*head) {
        list *p = *head;

        while (p->next)
            p = p->next;
        if (p->arr[5] > 0)
            p->next = create_node(ay);
        else
            p->next = create_node(p->arr[5] + ay);
    }
    else
        *head = create_node(ay);
}

void mx_pop_front(list **head) {
    list *next_node = NULL;

    if (head && *head) {
        next_node = (*head)->next;
        free(*head);
        *head = next_node;
    }
}

int mx_list_size(list *head) {
    list *current = head;
    int ret = 0;

    while (current) {
        current = current->next;
        ret++;
    }
    return ret;
}
