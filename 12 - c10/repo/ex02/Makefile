NAME = ft_tail
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
INCS = $(wildcard *.h)
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
