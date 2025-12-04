/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:02:03 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/04 16:11:21 by fsitter          ###   ########.fr       */
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
