/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/05 17:16:56 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac < 2)
		return (0);
	if (!f_valid_integers_plus(av, ac, 1))
		return (ft_putstr_fd("ERROR\n", 2), 0);
	f_init_stack(&stack_a);
	f_init_stack(&stack_b);
	if (!f_fill_nodes(&stack_a, av, ac, 1))
		return (ft_putstr_fd("ERROR:\nMalloc!\n", 2), 0);
	f_sort_index(&stack_a, av, ac);
	if (f_is_sorted(&stack_a))
		return (0);
	if (ac < 51)
		f_quicksort(&stack_a, &stack_b);
	else
		f_pre_radix(&stack_a, &stack_b);
	if (!(f_is_sorted(&stack_a)))
		return (-1);
	f_free_stack(&stack_a);
	f_free_stack(&stack_b);
}

// int	main(int ac, char **av)
// {
// 	t_stack	stack_a;
// 	t_stack	stack_b;

// 	if (ac < 2)
// 		return (0);
// 	if (!f_valid_integers_plus(av, ac, 1))
// 		return (ft_putstr_fd("ERROR\n", 2), 0);
// 	f_init_stack(&stack_a);
// 	f_init_stack(&stack_b);
// 	if (!f_fill_nodes(&stack_a, av, ac, 1))
// 		return (ft_putstr_fd("ERROR:\nMalloc!\n", 2), 0);
// 	f_sort_index(&stack_a, av, ac);

// 	// ft_printf("stack A\n");
// 	// f_print_stack(stack_a);
// 	// ft_printf("\nstack B\n");
// 	// f_print_stack(stack_b);

// 	pb(&stack_a, &stack_b);
// 	pb(&stack_a, &stack_b);

// 	ft_printf("stack A\n");
// 	f_print_stack(stack_a);
// 	ft_printf("\nstack B\n");
// 	f_print_stack(stack_b);

// 	rr(&stack_a, &stack_b);

// 	ft_printf("stack A\n");
// 	f_print_stack(stack_a);
// 	ft_printf("\nstack B\n");
// 	f_print_stack(stack_b);

// // 	// ft_printf("\n\n\n\nstack B\n");
// // 	// f_print_stack(stack_b);
// // 	// ft_printf("\n\n\nTOP\n");
// // 	// ft_printf("NUMBER %i\tINDEX %i\n", stack_b.top->number,
// 		stack_b.top->index);
// 		// 	// ft_printf("BOT\n");
// 		// 	// ft_printf("NUMBER %i\tINDEX %i\n", stack_b.bottom->number,
// 		stack_b.bottom->index);

// 		// }