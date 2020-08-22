clang -std=c11 -Werror -Wextra -Wall -Wpedantic -c *c
ar rc minilibmx.a *.o
rm *.o
