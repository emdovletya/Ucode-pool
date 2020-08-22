#include <stdbool.h>

bool mx_isdigit(int c);
void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);

bool alldigits(char *str) {
  bool x = true;

  if (mx_isdigit(*str) || *str == '-' || *str == '+') {
    str++;
    while (*str) {
      if (!mx_isdigit(*str))
         x = false;
      str++;
    }
  }
  else
      x = false;
  return x;
}

int main(int c, char *v[]) {
  int sum = 0;

  if (c < 2)
    return 0;

  for (int i = 1; i < c; i++) {
    if (alldigits(v[i]))
      sum += mx_atoi(v[i]);
  }
  if (sum == 0)
    mx_printchar('0');
  else if (sum > 0)
    mx_printint(sum);
  else {
    sum = -sum;
    mx_printchar('-');
    mx_printint(sum);
  }
  mx_printchar('\n');
}
