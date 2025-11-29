/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:10:25 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/29 14:29:37 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{

	if (ac < 2)
		return (0);
	if (!f_valid_integers_plus(av, ac))
		return(ft_printf("ERROR:\nList contains non Integers\n"), -1);
	// if (!f_int_borders(av, ac))
	// 	return(ft_printf("ERROR:\nPlease comply with INT_LIMITS\n"));

	ft_printf("valid\n");


}