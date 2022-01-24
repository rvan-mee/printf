SRC =	./libft/ft_putchar.c		\
		./libft/ft_puthexlow.c		\
		./libft/ft_puthexupp.c		\
		./libft/ft_putnbr.c			\
		./libft/ft_putstr.c			\
		./libft/ft_putunsigned.c	\
		./libft/ft_strlen.c			\
		ft_printf.c					\

CFLAGS = -Wall -Werror -Wextra -I. -o ft_printf

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

CC= gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f *.o ./libft/*.o

fclean: clean
	rm -f libftprintf.a

re: fclean all

.PHONY:	all clean fclean re
