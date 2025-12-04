/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:43:30 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/02 15:57:09 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	f_push(t_stack *stack_a, t_stack *stack_b)
{
	t_number	*first_a;
	t_number	*first_b;
	t_number	*second_b;

	if (!stack_b->top)
		return (0);
	first_a = stack_a->top;
	first_b = stack_b->top;
	second_b = first_b->next;
	stack_b->top = second_b;
	if (second_b)
		second_b->previous = NULL;
	first_b->next = first_a;
	if (first_a)
		first_a->previous = first_b;
	first_b->previous = NULL;
	stack_a->top = first_b;
	stack_a->size++;
	stack_b->size--;
	return (1);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (f_push(stack_a, stack_b))
		ft_putstr_fd("pa\n", 1);
	else
		return ;
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (f_push(stack_b, stack_a))
		ft_putstr_fd("pb\n", 1);
	else
		return ;
}
