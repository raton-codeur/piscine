NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INCS = includes/ft.h
INC_DIR = includes
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rc $@ $^

$(OBJS) : $(INCS)

%.o: %.c
	$(CC) -c $(FLAGS) -I $(INC_DIR) $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
