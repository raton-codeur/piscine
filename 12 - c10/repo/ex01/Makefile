NAME = ft_cat
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = main.c ft_cat.c
INCS = ft.h
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(OBJS) : $(INCS)

%.o : %.c
	$(CC) -c $(FLAGS) $<

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
