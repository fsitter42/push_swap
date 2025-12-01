/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/01 10:29:13 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack stack_a;
	t_stack stack_b;
	if (ac < 2)
		return (0);
	if (!f_valid_integers_plus(av, ac))
		return (ft_putstr_fd("ERROR:\nList contains non Integers or duplicates\n",
				2), 0);
	f_init_stack(&stack_a);
	f_init_stack(&stack_b);
	if (!f_fill_nodes(&stack_a, av, ac))
		return (ft_putstr_fd("ERROR:\nMalloc!\n", 2), 0);
	ft_printf("Stack A:\n");
	f_print_stack(stack_a);
	ft_printf("Stack B:\n");
	f_print_stack(stack_b);
	pb(&stack_a, &stack_b);
	ft_printf("Stack A:\n");
	f_print_stack(stack_a);
	ft_printf("Stack B:\n");
	f_print_stack(stack_b);
	pa(&stack_a, &stack_b);
	ft_printf("Stack A:\n");
	f_print_stack(stack_a);
	ft_printf("Stack B:\n");
	f_print_stack(stack_b);
	
	// f_print_stack(stack_a);
	// f_print_stack(&stack_a);
	//sa(&stack_a);
	ft_printf("\n");
	//f_print_stack(stack_a);
	f_free_stack(&stack_a);
	f_free_stack(&stack_b);

	ft_printf("valid\n");
}
