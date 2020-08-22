NAME = race04

SRC = src/mx_file_to_str.c \
	src/race04.c \
	src/mx_lee.c \
	src/files.c \
	src/valid.c \
	src/errors.c \
	src/errors02.c \
	src/mx_atoi.c \
	src/mx_isdigit.c \
	src/mx_isspace.c \
	src/mx_printint.c \
	src/mx_printchar.c \
	src/mx_printerr.c \
	src/mx_printstr.c \
	src/mx_strcmp.c \
	src/mx_strdel.c \
	src/mx_strlen.c \
	src/mx_strncpy.c \
	src/mx_strcpy.c \
	src/mx_strcat.c \
	src/mx_strnew.c \
	src/mx_strtrim.c 

INC = inc/header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@clang $(CFLAGS) -o $(NAME) $(SRC) -I $(INC)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf header.h
reinstall: all
