NAME=libftprintf.a
CC=gcc
INCLUDES=-I ../includes
SRC=src
C_FLAGS=-Wall -Werror -Wextra
C_FILES=main.c ft_putchar.c ft_putstr.c ft_putnbr.c
O_FILES=main.o ft_putchar.o ft_putstr.o ft_putnbr.o

all:$(NAME)

$(NAME): obj.o
	cd $(SRC); ar -rcs ../$(NAME) $(O_FILES)

obj.o:
	cd $(SRC); $(CC) $(C_FLAGS) $(INCLUDES) -c $(C_FILES)

re: fclean all

fclean: clean
	rm -f $(NAME)

clean:
	cd $(SRC)
	rm -f $(SRC)/*.o

test: re
	gcc $(C_FLAFS) -I includes test.c $(NAME) -o test

ctest:
	rm -rf test
