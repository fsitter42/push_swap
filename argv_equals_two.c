/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_equals_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:06:30 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/02 14:54:41 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**argv_equals_two(char *avone, int *myac)
{
	char	**myav;
	int		i;

	myav = NULL;
	*myac = how_many_words(avone, 32);
	if (*myac < 2)
		return (NULL);
	myav = ft_split(avone, 32);
	return (myav);
}
