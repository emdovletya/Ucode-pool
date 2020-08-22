int mx_count_words(const char *str, char delimiter) {
	int i = 0;
	int j = 0;
	while (str[i] == delimiter)
		i++;
	while (str[i + 1] != '\0') {
		if (str[i] == delimiter && str[i + 1] != delimiter)
			j++;
        i++;
	}
	if (j > 0)
		return j + 1;
	return 0;
}
