/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 00:26:46 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/01 00:51:37 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack);
void	swap_a(t_stack *stack_a);

void	swap(t_stack *stack)
{
	t_number	swap;

	if (stack->size < 2)
		return ;
	swap.number = stack->first->number;
	swap.index = stack->first->index;
	swap.previous = stack->first->previous;
	swap.next = stack->first->next;
	stack->first->number = stack->first->next->number;
	stack->first->index = stack->first->next->index;
	stack->first->previous = stack->first->next->previous;
	stack->first->next = stack->first->next->next;
	stack->first->next->number = swap.number;
	stack->first->next->index = swap.index;
	stack->first->next->previous = swap.previous;
	stack->first->next->next = swap.next;
}

void	swap_a(t_stack *stack_a)
{
	if (stack_a->size < 2)
		return ;
}
