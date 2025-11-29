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
	long				number;
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

// input.c
int						valid_integers_plus(char **av, int ac);
char					is_valid(char *avi, char* itoa_of_atoi);
int						f_valid_integers_plus(char **av, int ac);
long long				f_atol(const char *nptr);
int						f_int_borders(char **av, int ac);

#endif
