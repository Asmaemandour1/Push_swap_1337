/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:45:49 by amandour          #+#    #+#             */
/*   Updated: 2024/05/10 12:59:10 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	str_len(int ac, char **av)
{
	int		i;
	size_t	len;
	size_t	j;

	i = 1;
	len = 0;
	j = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			len++;
		}
		len++;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int ac, char **av)
{
	int		i;
	int		k;
	int		j;
	char	*str;

	i = 0;
	k = 0;
	str = (char *)malloc (str_len(ac, av));
	if (!str)
		return (NULL);
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j++];
		}
		str[k++] = ' ';
	}
	str[--k] = 0;
	return (str);
}
