/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:02:03 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/02 14:56:51 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_print_stack(t_stack stack);

void	f_print_stack(t_stack stack)
{
	t_number	*current;

	current = stack.first;
	while (current)
	{
		ft_printf("NUMBER %i\tINDEX %i\n", current->number, current->index);
		current = current->next;
	}
}
