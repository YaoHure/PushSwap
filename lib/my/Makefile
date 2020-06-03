##
## EPITECH PROJECT, 2018
## Huré Yaowanart
## File description:
## Makefile
##

SRC	=	my_strlen.c \
		my_putstr.c \
		my_putchar.c

OBJ	= $(SRC:.c=.o)

NAME	= libmy.a

all:	$(OBJ)
		ar rc $(NAME) *.o
		rm -f $(OBJ) *~
clean:
		rm -f $(OBJ) *~

fclean:	clean
		rm -f $(NAME)

re:		fclean all
