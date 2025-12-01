int	valid_integers(char **av, int ac);
int	f_valid_integers_plus(char **av, int ac);

int	valid_integers(char **av, int ac)
{
	char	*itoa_of_atoi;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		itoa_of_atoi = ft_itoa(ft_atoi(av[i]));
		j = 0;
		while (av[i][j] || itoa_of_atoi[j])
		{
			if (av[i][j] != itoa_of_atoi[j] && av[i][j + 1] != itoa_of_atoi[j])
			{
				free(itoa_of_atoi);
				return (0);
			}
			j++;
		}
		free(itoa_of_atoi);
		i++;
	}
	return (1);
}

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
		else if (!ft_strncmp(av[i], "+", ft_strlen(av[i])))
			return(free(itoa_of_atoi), 0);
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
