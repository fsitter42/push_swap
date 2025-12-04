/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:50:20 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/03 16:56:47 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// includes
# include "libft/libft.h"
# include <limits.h>

// prototypes of structs
typedef struct s_number	t_number;
typedef struct s_stack	t_stack;

// struct to safe each individual nr
typedef struct s_number
{
	int					number;
	int					index;
	t_number			*previous;
	t_number			*next;
}						t_number;

// struct to store info about stack
typedef struct s_stack
{
	t_number			*top;
	t_number			*bottom;
	size_t				size;
}						t_stack;

// prototypes of functions

// input_helper.c
int						f_valid_integers_plus(char **av, int ac, int i);
int						f_find_duplicate(char **av, int ac, int i);
void					f_init_stack(t_stack *stack);
int						f_fill_nodes(t_stack *a, char **av, int ac, int i);
void					f_free_stack(t_stack *stack);

// argv_equals_two.c
char					**argv_equals_two(char *avone, int *myac); // delete

// helper_2.c
void					f_print_stack(t_stack stack);
void					f_find_max(t_stack stack);

// swap_operations.c
int						f_swap(t_stack *stack);
void					sa(t_stack *stack_a);
void					sb(t_stack *stack_b);
void					ss(t_stack *stack_a, t_stack *stack_b);

// push_operations.c
int						f_push(t_stack *stack_a, t_stack *stack_b);
void					pa(t_stack *stack_a, t_stack *stack_b);
void					pb(t_stack *stack_a, t_stack *stack_b);

// rotate_operations.c
int						f_rotate(t_stack *stack);
void					ra(t_stack *stack_a);
void					rb(t_stack *stack_b);
void					rr(t_stack *stack_a, t_stack *stack_b);

// reverse_rotate_operations.c
int						f_reverse_rotate(t_stack *stack);

// sort_index.c
void					ft_sort_int_tab(int *tab, int size);
int						*f_create_int_arr(int ac, char **av);
int						f_sort_index(t_stack *stack, char **av, int ac);
void					f_sort_in_stack(t_stack *stack, int *arr, int ac);
#endif
