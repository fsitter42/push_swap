/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:02:03 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/05 17:12:01 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_print_stack(t_stack stack)
{
	t_number	*current;

	current = stack.top;
	while (current)
	{
		ft_printf("NUMBER %i\tINDEX %i\n", current->number, current->index);
		current = current->next;
	}
}

void	f_find_max(t_stack stack)
{
	t_number	*current;
	t_number	*max;

	current = stack.top;
	max = current;
	while (current)
	{
		if (current->number > max->number)
			max = current;
		current = current->next;
	}
	ft_printf("MAX_NUMBER %i\tMAX_INDEX %i\n", max->number, max->index);
}

void	f_find_min(t_stack stack)
{
	t_number	*current;
	t_number	*min;

	current = stack.top;
	min = current;
	while (current)
	{
		if (current->number < min->number)
			min = current;
		current = current->next;
	}
	ft_printf("MAX_NUMBER %i\tMAX_INDEX %i\n", min->number, min->index);
}
