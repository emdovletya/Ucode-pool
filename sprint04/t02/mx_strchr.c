char *mx_strchr(const char *s, int c) {

    while(*s != c) {
      if (!*s++)
        return (char *)s;
    }
    return NULL;
}
