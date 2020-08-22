#include <stdbool.h>

bool mx_isdigit(int c);
void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
  int x = 0;
  int y = 0;

  if (argc < 2)
    return 0;
  for (int i = 1; i < argc; i++) {    
     x = (mx_atoi(argv[i]));
      for (int c = 31; c >= 0; c--) {
	y = x >> c;
	if (y & 1){
	  mx_printchar('1');
	}
	else {
	  mx_printchar('0');
	}
      }
      mx_printchar('\n');
  }
}
