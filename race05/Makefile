NAME = race05

SRC = src/race05.c \
	src/preview.c \
	src/functions.c \
	src/lists.c \
	src/main.c

INC = inc/header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses

all: install clean

install:
	@clang $(CFLAGS) -o $(NAME) $(SRC) -I $(INC)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf header.h
reinstall: all
