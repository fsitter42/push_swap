/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_equals_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:06:30 by fsitter           #+#    #+#             */
/*   Updated: 2025/12/01 18:41:14 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**argv_equals_two(char *avone);

char	**argv_equals_two(char *avone)
{
	char	**myav;
	int		i;

	myav = ft_split(avone, 32);
	i = 0;
	while (myav[i])
		i++;
	if (i < 2)
	{
		i = 0;
		while (myav[i])
			free(myav[i++]);
		free(myav);
		return (NULL);
	}
	return (myav);
}
