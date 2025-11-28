/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/28 14:10:01 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	char *s = "+-500";
	
	int atoi_s = ft_atoi(s);

	ft_printf("%i\n", atoi_s);
	ft_printf("strlen original:\t%i\n", ft_strlen(s));
	ft_printf("strlen itoa of atoi:\t%i\n", ft_strlen(ft_itoa(atoi_s)));
	
	
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