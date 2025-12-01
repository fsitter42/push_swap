/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 01:02:03 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/01 01:12:21 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void f_print_stack(t_stack stack);

void f_print_stack(t_stack stack)
{
	t_number *current = stack.first;
    while(current)
    {
        ft_printf("NUMBER %i\tINDEX %i\n", current->number, current->index); // delete later
        current = current->next;
    }
}