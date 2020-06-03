##
## EPITECH PROJECT, 2018
## Yaowanart Hure
## File description:
## Makefile
##

SRC	=	src/list_a.c			\
		src/list_b.c			\
		src/main.c				\
		src/push_swap.c			\
		src/error.c				\
		src/verif.c				\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra

CLIB	=	-L./lib/my -lmy

all:
	make -C ./lib/my/
	gcc $(SRC) -o push_swap $(CLIB) $(CFLAGS)

clean:
	make clean -C ./lib/my/
	rm -f *~

fclean: clean
	make fclean -C ./lib/my/
	rm -f push_swap

re:	fclean all
	make re -C ./lib/my/
