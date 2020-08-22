NAME = minilibmx.a

SRC = src/mx_atoi.c \
        src/mx_isdigit.c \
        src/mx_isspace.c \
        src/mx_printchar.c \
        src/mx_printstr.c \
        src/mx_printint.c \
        src/mx_strlen.c \
        src/mx_strcpy.c \
        src/mx_strcmp.c

OBJ = mx_atoi.o \
        mx_isdigit.o \
        mx_isspace.o \
        mx_printstr.o \
        mx_printint.o \
        mx_printchar.o \
        mx_strlen.o \
        mx_strcmp.o \
        mx_strcpy.o 

INC = inc/header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(INC) .
	@clang $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf header.h
	@rm -rf $(OBJ)
reinstall: uninstall clean all
