CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putuint.c ft_putnbrbase.c ft_putaddress.c ft_putulong.c \
ft_printchar.c ft_printstr.c ft_printnbr.c ft_printuint.c ft_printaddress.c ft_printhex.c
INCLUDES = ./
OBJS = $(SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDES)

$(NAME): $(OBJS)
	ar src $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re