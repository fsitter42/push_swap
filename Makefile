NAME = push_swap

SOURCE = 	push_swap.c \
			input_helper.c \
			operations.c

			

HEADER = push_swap.h

CFLAGS += -Wall -Wextra -Werror -g 

OBJECTS = $(SOURCE:.c=.o)

LIBFT = libft/libft.a

CC = cc

RM = rm -f


%.o: %.c ${HEADER}
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
	make -C libft
	make clean -C libft
	cc *.c ${LIBFT} -g -o s
	./s
v:
	cc *.c ${LIBFT} -g -o s
	valgrind ./s

.PHONY: clean fclean re all