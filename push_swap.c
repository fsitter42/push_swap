/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/02 18:56:39 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int ac, char **av)
// {
// 	char	**myav;
// 	int		myac;

// 	myav = NULL;
// 	myac = 0;
// 	ft_printf("myac = %i\n", ac);
// 	if (ac < 2)
// 		return (0);
// 	// if (ac == 2)
// 	// {
// 	// 	myav = argv_equals_two(av[1], &myac);
// 	// 	if (myav == NULL)
// 	// 		return (0);
// 	// 	if (!f_valid_integers_plus(myav, myac, 0))
// 	// 		return (free_delete(myav, myac),
// 	// 			ft_putstr_fd("ERROR:\nNon Integers or duplicates\n", 2), 0);
// 	// }
// 	if (ac > 2)
// 	{
// 		if (!f_valid_integers_plus(av, ac, 1))
// 			return (ft_putstr_fd("ERROR:\nNon Integers or duplicates\n", 2), 0);
// 		int i = 1;
// 		while (av[i])
// 		{

// 			ft_printf("%s\n", av[i]);
// 				i++;
// 		}
// 	}
// 	if (myav != NULL)
// 		free_delete(myav, myac);
// }

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac < 2)
		return (0);
	if (!f_valid_integers_plus(av, ac, 1))
		return (ft_putstr_fd("ERROR:\nList contains non Integers or duplicates\n",
				2), 0);
	f_init_stack(&stack_a);
	f_init_stack(&stack_b);
	if (!f_fill_nodes(&stack_a, av, ac, 1))
		return (ft_putstr_fd("ERROR:\nMalloc!\n", 2), 0);
	ft_printf("Stack A:\n");
	f_print_stack(stack_a);
	ft_printf("Stack B:\n");
	f_print_stack(stack_b);
	ra(&stack_a);
	// pb(&stack_a, &stack_b);
	ft_printf("Stack A:\n");
	f_print_stack(stack_a);
	ft_printf("Stack B:\n");
	f_print_stack(stack_b);
	// sb(&stack_b);
	// pa(&stack_a, &stack_b);
	// pa(&stack_a, &stack_b);
	// ft_printf("Stack A:\n");
	// f_print_stack(stack_a);
	// ft_printf("Stack B:\n");
	// f_print_stack(stack_b);
	// f_print_stack(stack_a);
	// f_print_stack(&stack_a);
	// sa(&stack_a);
	ft_printf("\n");
	// f_print_stack(stack_a);
	f_free_stack(&stack_a);
	f_free_stack(&stack_b);
	ft_printf("valid\n");
}
