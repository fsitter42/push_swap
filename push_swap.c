/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/28 14:38:06 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(void)
{
	char	*av[] = {"20", "5+", "hello", "6", "3", "4", NULL};
	int		ac;

	ac = 1;
	while (av[ac - 1])
		ac++;
	
}

int	valid_input(char* av, int *ac)
{
	int len_of_av_i;
	int len_of_itoa_of_atoi_of_av_i;
	
	
}

// int	main(void)
// {
// 	t_stack stack_a;
// 	t_stack stack_b;

// 	char *numbers[] = {"20", "5+", "hello", "6", "3", "4", NULL};

// 	int ac = 1;

// 	while (numbers[ac-1])
// 		ac++;
// 	ft_printf("%i\n", ac);
// 	int i = 0;

// 	while (numbers[i])
// 	{
// 		ft_printf("%i\n", ft_atoi(numbers[i]));
// 		i++;
// 	}
// 	return (0);
// }