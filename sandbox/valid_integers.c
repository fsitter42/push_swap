int	valid_integers(char **av, int ac);

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
