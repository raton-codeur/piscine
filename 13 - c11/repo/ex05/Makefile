NAME = do-op
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard srcs/*.c)
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
