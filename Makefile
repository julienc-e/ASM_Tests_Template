##
## EPITECH PROJECT, 2018
## asm
## File description:
## asm
##

CC	=	gcc

CFLAGS  =	-Wall -Wextra -Winit-self -Wwrite-strings
CFLAGS  +=	-Wcast-align -Wshadow -Wredundant-decls -Wfloat-equal
CFLAGS  +=	-Wundef -Wlogical-op -Winline -Wdouble-promotion
CFLAGS  +=	-Wunreachable-code -coverage -Iinclude -I../include
CFLAGS	+=	-D_DEFAULT_SOURCE

LFLAGS	=	-ldl -lcriterion -fno-builtin

NAME	=	tests

RM	=	rm -f

SRCDIR	=	src

SRC	=	setup.c			\
		teardown.c		\
		test/test_sample.c	\

SRC	:=	$(addprefix $(SRCDIR)/, $(SRC))

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(SRC:.c=.gcno)
	$(RM) $(SRC:.c=.gcda)
	$(RM) $(addsuffix ~, $(SRC))

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all libs clean fclean re