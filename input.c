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

int			f_valid_integers_plus(char **av, int ac);
int			f_find_duplicate(char **av, int ac);

int	f_valid_integers_plus(char **av, int ac)
{
	char	*itoa_of_atoi;
	int		i;

	i = 1;
	while (i < ac)
	{
		itoa_of_atoi = ft_itoa(ft_atoi(av[i]));
		if (!ft_strncmp(av[i], "-0", ft_strlen(av[i])))
			i++;
		else if (!ft_strncmp(av[i], itoa_of_atoi, ft_strlen(av[i])))
			i++;
		else if ((ft_strchr("+", av[i][0])) && !(ft_strncmp(av[i]+1, itoa_of_atoi, (ft_strlen(av[i])-1))))
			i++;
		else
			return(free(itoa_of_atoi), 0);
		free(itoa_of_atoi);
	}
	if (f_find_duplicate(av, ac))
		return (0);
	return (1);
}

int f_find_duplicate(char **av, int ac)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}