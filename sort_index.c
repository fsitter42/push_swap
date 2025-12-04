/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 09:55:30 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/25 13:31:44 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_position;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min_position = i;
		while (j < size)
		{
			if (tab[min_position] > tab[j])
				min_position = j;
			j += 1;
		}
		if (min_position != i)
		{
			swap = tab[i];
			tab[i] = tab[min_position];
			tab[min_position] = swap;
		}
		i += 1;
	}
}

int	*f_create_int_arr(int ac, char **av)
{
	int	*arr;
	int	i;

	arr = malloc((ac - 1) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 1;
	while (i < ac)
	{
		arr[i - 1] = ft_atoi(av[i]);
		i++;
	}
	return (arr);
}

int	f_sort_index(t_stack *stack, char **av, int ac)
{
	int	*arr;
	int i;

	arr = f_create_int_arr(ac, av);
	if (!arr)
		return (0);
	ft_sort_int_tab(arr, ac - 1);
	f_sort_in_stack(stack, arr, ac);
	i = 0;
	free(arr);
	return (1);
}

void	f_sort_in_stack(t_stack *stack, int *arr, int ac)
{
	t_number	*current;
	int			i;

	current = stack->top;
	while (current)
	{
		i = 0;
		while (i < ac - 1)
		{
			if (arr[i] == current->number)
				current->index = i;
			i++;
		}
		current = current->next;
	}
}
