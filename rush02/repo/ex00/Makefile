NAME = rush-02
SRC_DIR = srcs
INC_DIR = includes
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard $(SRC_DIR)/*.c) 
OBJS = $(SRCS:.c=.o)

${NAME} :
	${CC} ${FLAGS} -I $(INC_DIR) ${SRCS} -o ${NAME} 

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
