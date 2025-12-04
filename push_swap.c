/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/04 18:21:10 by fsitter          ###   ########.fr       */
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


	// ft_printf("stack A\n");
	// f_print_stack(stack_a);
	// ft_printf("stack B\n");
	// f_print_stack(stack_b);
	
	pb(&stack_a, &stack_b);
	ft_printf("%i\n", stack_b.bottom->index);
	pb(&stack_a, &stack_b);
	ft_printf("%p\n", stack_b.bottom);
	pb(&stack_a, &stack_b);
	ft_printf("%p\n", stack_b.bottom);
	pb(&stack_a, &stack_b);
	
	ft_printf("%p\n", stack_b.bottom);

	ft_printf("stack A\n");
	f_print_stack(stack_a);
	ft_printf("stack B\n");
	f_print_stack(stack_b);

	ft_printf("SIZE OF STACKB: %i\n", stack_b.size);
	ft_printf("\n");
	ft_printf("\n");
	ft_printf("\n");
	ft_printf("\n");
	//ra(&stack_a);
	rb(&stack_b);
	

	ft_printf("stack A\n");
	f_print_stack(stack_a);
	ft_printf("stack B\n");
	f_print_stack(stack_b);

	
	
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
// 	if (f_is_sorted(&stack_a))
// 		return (0);
	
	
// 	f_print_stack(stack_a);
	
// 	f_pre_radix(&stack_a, &stack_b);
// 	f_print_stack(stack_a);

// 	if (!(f_is_sorted(&stack_a)))
// 		return (-1);
// 	f_free_stack(&stack_a);
// 	f_free_stack(&stack_b);
// }
