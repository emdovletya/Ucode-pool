#include "list.h"

void mx_clear_list(t_list **list) {
	if (*list == NULL || list == NULL)
		return;

	t_list *z = *list;
	if (!z) return;
	while (z != NULL) { 
		t_list *temp = z->next;
		free(z);
		z = temp; 
	}
    *list = NULL;
}
