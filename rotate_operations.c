/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:29:33 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/02 19:05:50 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	f_rotate(t_stack *stack)
{
	t_number	*first;
	t_number	*last;
	t_number	*second;
	t_number	*prev_last;

	if (stack->size < 3 || !stack->top || !stack->bottom)
		return (0);
	first = stack->top;
	last = stack->bottom;
	second = first->next;
	prev_last = stack->bottom->previous;
	
	stack->top = last;
	// stack->top->next = second;
	prev_last->next = first;
	first->next = NULL;
	return (1);
}

void	ra(t_stack *stack_a)
{
	if (stack_a->size == 2)
	{
		f_swap(stack_a);
		ft_putstr_fd("ra\n", 1);
		return ;
	}
	else if (f_rotate(stack_a))
		ft_putstr_fd("ra\n", 1);
	else
		return ;
}

void	rb(t_stack *stack_b)
{
	if (stack_b->size == 2)
	{
		f_swap(stack_b);
		ft_putstr_fd("rb\n", 1);
		return ;
	}
	else if (f_rotate(stack_b))
		ft_putstr_fd("rb\n", 1);
	else
		return ;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size < 2 || stack_b->size < 2)
		return ;
	if (stack_a->size > 2)
		f_rotate(stack_a);
	if (stack_a->size == 2)
		f_swap(stack_a);
	if (stack_b->size > 2)
		f_rotate(stack_b);
	if (stack_b->size == 2)
		f_swap(stack_b);
	ft_putstr_fd("rr\n", 1);
	
}
