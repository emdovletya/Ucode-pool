#include "get_address.h"

char *mx_get_address(void *p) {
	if (!p)
		return NULL;
    
    char *res;
    char *res_hex;
    int len = mx_strlen((char *)p);
    unsigned long p_a = (unsigned long)p;

    res = (char *) malloc(sizeof(char) * (len + 2));
    res[0] = '0';
    res[1] = 'x';
    res_hex = mx_nbr_to_hex(p_a);
    for (int i = 2; i < len + 4; i++)
        res[i] = res_hex[i - 2];
    return res;
}
