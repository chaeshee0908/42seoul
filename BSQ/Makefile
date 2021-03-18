SRCS = srcs/ft_check.c srcs/ft_etc.c srcs/ft_map.c srcs/ft_file.c srcs/main.c srcs/ft_modify_map.c srcs/ft_print_map.c

INCDIR	=./includes/

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

%.o: %.c
	${CC} -c ${CFLAGS} -I ${INCDIR} -o $@ $<

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
