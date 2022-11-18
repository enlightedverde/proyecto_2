SRCS	= ./src/get_next_line.c \
	  ./src/main.c 

OBJS	= ${SRCS:.c=.o}

LIB	= ./lib/libft/libft.a

CC	= cc

CFLAGS	= #-Wall -Werror -Wextra

NAME	= bot_poesia

RM	= rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		make -C ./lib/libft bonus
		${CC} -o ${NAME} ${OBJS} ${LIB}

clean:
		make -C ./lib/libft clean
		${RM} ${OBJS} ${OBJSLST} final file_temp

fclean:		clean
		make -C ./lib/libft fclean
		${RM} ${NAME}

all:		${NAME}

re:		fclean all

.PHONY:		all clean fclean re
