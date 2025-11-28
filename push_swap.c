/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/28 15:02:33 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_input(char **av, int ac);

int	main(void)
{
	char	*av[] = {"20", "5+", "-1hello", "6", "3", "4", NULL};
	int		ac;

	ac = 1;
	while (av[ac - 1])
		ac++;
	valid_input(av, ac);
}

int	valid_input(char **av, int ac)
{
	int	len_of_av_i;
	int	len_of_itoa_of_atoi_of_av_i;
	int	i;

	i = 1;
	while (i < ac)
	{
		len_of_av_i = ft_strlen(av[i - 1]);
		len_of_itoa_of_atoi_of_av_i = ft_strlen(ft_itoa(ft_atoi(av[i - 1])));
		ft_printf("Input: %s\nlen av[i]: %i\nlen it_at: %i\nOutput: %s\n-----\n",av[i-1], len_of_av_i,
			len_of_itoa_of_atoi_of_av_i, ft_itoa(ft_atoi(av[i - 1])));
			i++;
	}
	return (0);
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