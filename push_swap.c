/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/28 11:52:18 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_stack stack_a;
	t_stack stack_b;

	char *numbers[] = {"20", "5+", "+-1", "6", "3", "4", NULL};
	
	int i = 0;
	
	while (numbers[i])
	{
		ft_printf("%i\n", ft_atoi(numbers[i]));
		i++;
	}
	return (0);
}