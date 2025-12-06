NAME = push_swap

SOURCE = 	push_operations.c \
			radix.c \
			input_helper.c \
			push_swap.c \
			reverse_rotate_operations.c \
			sort_index.c \
			rotate_operations.c \
			swap_operations.c \
			microsort.c \
			quicksort.c			

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
	make -C libft
clean:	
	${RM} ${OBJECTS}
	make clean -C libft
fclean:	clean
		${RM} ${NAME}
		make fclean -C libft
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