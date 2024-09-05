/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:27:08 by amandour          #+#    #+#             */
/*   Updated: 2024/05/12 12:50:23 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_repeat(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] && str[i + 1])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static long long	ft_atoll(char *str)
{
	long long	c;
	int			sign;

	while ((*str != '\0')
		&& ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	sign = 1;
	if ((*str != '\0')
		&& (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	c = 0;
	while ((*str != '\0')
		&& (*str >= '0' && *str <= '9'))
	{
		c = c * 10 + (*str - '0');
		if (c > 2147483648)
			return (21474836500);
		str++;
	}
	return (c * sign);
}

int	check_arg(int ac, char **av)
{
	char	**str;
	int		i;

	i = 0;
	if (check_spaces(av))
		return (1);
	str = ft_split(ft_strjoin(ac, av), ' ');
	if (!str)
		return (1);
	if (check_integers(str))
	{
		free_str(str);
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (check_minmax(ft_atoll(str[i])))
			return (free_str(str), 1);
		i++;
	}
	if (check_repeat(str))
		return (free_str(str), 1);
	free_str(str);
	return (0);
}
