NAME = push_swap

SOURCE = 	push_swap.c \
			main.c
			

HEADER = push_swap.h

CFLAGS += -Wall -Wextra -Werror -g 

OBJECTS = $(SOURCE:.c=.o)

LIBFT = libft/libft.a

CC = cc

RM = rm -f


%.o: %.c
	${CC} ${CFLAGS} $ -c $< -o $@
${NAME}: ${OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} ${LIBFT} -o ${NAME}
clean:	
	${RM} ${OBJECTS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all
all:	${NAME}
make:	make all
a:
	cc *.c ${LIBFT} -g -o s
	./s

.PHONY: clean fclean re all