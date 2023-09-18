NAME = ft_display_file
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = main.c ft_display_file.c
INCS = ft.h
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o : %.c $(INCS)
	$(CC) -c $(FLAGS) $<

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
