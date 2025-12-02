/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:29:33 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/02 16:25:11 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	f_rotate(t_stack *stack)
{
	t_number	*first;
	t_number	*last;
	t_number	*second;

	if (stack->size < 2 || !stack->top || !stack->bottom)
		return (0);
	first = stack->top;
	last = stack->bottom;
	second = first->next;
	stack->top = last;
	last->next = second;
	first->next = NULL;
	if (second)
		second->previous = first;
	first->previous = last->previous;
	last->previous = NULL;
	return (1);
}

void	ra(t_stack *stack_a)
{
	if (f_rotate(stack_a))
		ft_putstr_fd("ra\n", 1);
	else
		return ;
}

void	rb(t_stack *stack_b)
{
	if (f_rotate(stack_b))
		ft_putstr_fd("rb\n", 1);
	else
		return ;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (f_rotate(stack_a) && (f_rotate(stack_b)))
		ft_putstr_fd("rr\n", 1);
	else
		return ;
}
