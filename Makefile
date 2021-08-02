NAME=libftprintf.a
CC=gcc
INCLUDES=-I includes
SRC=src
C_FLAGS=-Wall -Werror -Wextra

all:$(NAME)

$(NAME): obj.o
	ar -rcs $(NAME) $(SRC)/*.o

obj.o:
	$(CC) $(C_FLAGS) $(INCLUDES) -c $(SRC)/*.c -o $(SRC)/$@

re: fclean all

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(SRC)/*.o

test: re
	gcc $(C_FLAFS) $(INCLUDES) test.c $(NAME) -o test

ctest:
	rm -rf test
