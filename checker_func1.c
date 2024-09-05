/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_func1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 20:41:58 by amandour          #+#    #+#             */
/*   Updated: 2024/05/10 13:36:36 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_spaces(char **av)
{
	int		i;
	size_t	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		if (ft_strlen(av[i]) == 0)
			return (1);
		while (av[i][j] == 32 || av[i][j] == '\n')
			j++;
		if (ft_strlen(av[i]) == j)
			return (1);
		i++;
	}
	return (0);
}

int	check_integers(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
		{
			j++;
			if (!av[i][j] || (av[i][j] < '0' && av[i][j] > '9'))
				return (1);
		}
		while (av[i][j] == 32 || av[i][j] == '\n')
			j++;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_minmax(long long nbr)
{
	if (nbr > 2147483647 || nbr < -2147483648)
		return (1);
	return (0);
}
