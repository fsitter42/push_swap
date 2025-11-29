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

	if (!valid_integers_plus(av, ac))
		ft_printf("PLUS: not valid\n");
	else
		ft_printf("PLUS: valid\n");

}