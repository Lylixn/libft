NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

SRC = src/ft_atoi.c \
	src/ft_memset.c \
	src/ft_putchar.c \
	src/ft_putnbr.c \
	src/ft_putstr.c \
	src/ft_strlen.c \

OBJ = $(SRC:.c=.o)
INC = ./includes/

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean clean