/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:19:23 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/04 16:12:49 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	f_reverse_rotate(t_stack *stack)
{
	t_number	*old_bottom;
	t_number	*new_bottom;
	t_number	*old_top;

	if (stack->size < 2 || !stack->top || !stack->bottom)
		return (0);
	old_bottom = stack->bottom;
	new_bottom = old_bottom->previous;
	old_top = stack->top;
	if (new_bottom)
		new_bottom->next = NULL;
	old_bottom->previous = NULL;
	old_bottom->next = old_top;
	old_top->previous = old_bottom;
	stack->top = old_bottom;
	stack->bottom = new_bottom;
	return (1);
}
