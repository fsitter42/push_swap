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

int			valid_integers_plus(char **av, int ac); // delete auch im .h
char		is_valid(char *avi, char* itoa_of_atoi);
int			f_valid_integers_plus(char **av, int ac);
long long	f_atol(const char *nptr); // delete
int			f_int_borders(char **av, int ac); // delete
int			f_find_duplicate(char **av, int ac);

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

char is_valid(char *avi, char* itoa_of_atoi)
{
	int j;

	j = 0;

	while (avi[j])
	{
		if (avi[j] == itoa_of_atoi[j])
			j++;
		else if ((ft_strchr("+", avi[0])) && (avi[j+1] == itoa_of_atoi[j]) && (ft_strlen(avi) == ft_strlen(itoa_of_atoi) +1))
			j++;
		else
			return (48);
	}
	return ('j');
}

int	f_valid_integers_plus(char **av, int ac)
{
	char	*itoa_of_atoi;
	int		i;

	i = 1;
	while (i < ac)
	{
		if (!ft_strncmp(av[i], "-0", ft_strlen(av[1])))
			i++;
		if (!av[i])
			return (1);
		itoa_of_atoi = ft_itoa(ft_atoi(av[i]));
		if (is_valid(av[i], itoa_of_atoi) == 'j')
			i++;
		else
			return(free(itoa_of_atoi), 0);
		free(itoa_of_atoi);
	}
	return (1);
}

long long	f_atol(const char *nptr)
{
	long long	number;
	long long	sign;
	int			i;

	number = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + nptr[i] - 48;
		i++;
	}
	return (number * sign);
}

int f_int_borders(char **av, int ac)
{
	int i;

	i = 1;

	while (i < ac)
	{
		if (f_atol(av[i]) < INT_MIN)
			return (0);
		else if (f_atol(av[i]) > INT_MAX)
			return (0);
		else
		i++;
	}
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