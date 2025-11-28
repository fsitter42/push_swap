/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:50:20 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/28 11:44:31 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// includes
# include "libft/libft.h"

// prototype for stuct
typedef struct s_number t_number;

// struct to safe each individual nr
typedef struct s_number
{
	long		number;
	int			index;
	t_number	*previous;
	t_number	*next;
}				t_number;

// struct to store info about stack

typedef struct s_stack
{
	t_number	*first;
	t_number	*last;
	size_t		size;
}				t_stack;

#endif
