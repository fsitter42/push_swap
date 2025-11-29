/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:03:48 by fsitter           #+#    #+#             */
/*   Updated: 2025/11/29 15:00:49 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_integers_plus(char **av, int ac);

int	valid_integers_plus(char **av, int ac)
{
	char	*itoa_of_atoi;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		if (!ft_strncmp(av[i], "-0", ft_strlen(av[1])))
			i++;
		if (!av[i])
			return (1);
		itoa_of_atoi = ft_itoa(ft_atoi(av[i]));
		j = 0;
		while (av[i] && av[i][j])
		{
			if ((av[i][j] == itoa_of_atoi[j]) || (ft_strchr("+", av[i][0]))
				&& av[i][j + 1] == itoa_of_atoi[j]
				&& ft_strlen(av[i]) == ((ft_strlen(itoa_of_atoi)) + 1))
				j++;
			else
				return (free(itoa_of_atoi), 0);
		}
		free(itoa_of_atoi);
		i++;
	}
	return (1);
}
