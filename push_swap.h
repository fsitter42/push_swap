/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:50:20 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/29 14:30:19 by fsitter          ###   ########.fr       */
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
	t_number			*first;
	t_number			*last;
	size_t				size;
}						t_stack;

// prototypes of functions

// input_helper.c
int						f_valid_integers_plus(char **av, int ac);
int						f_find_duplicate(char **av, int ac);
void					f_init_stack(t_stack *stack);
int 					f_fill_nodes(t_stack *a, char **av, int ac);
void					f_free_stack(t_stack *stack);

#endif
