NAME	= bsq
SRCS	= main.c input_check.c utility_functions.c solver.c
OBJS	= ${SRCS:.c=.o}
HEADER	= lib.h

CC		= cc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${SRCS}
			${CC} -c ${CFLAGS} ${SRCS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -I ${HEADER}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.PHONY:		clean
			fclean
			all
			re