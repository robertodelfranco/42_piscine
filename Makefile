NAME = rush-02

SRCS = main.c functions.c numbers.c read.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra -g

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean