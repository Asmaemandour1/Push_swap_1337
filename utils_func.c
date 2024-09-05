/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:19:38 by amandour          #+#    #+#             */
/*   Updated: 2024/05/12 15:40:05 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s)
	{
		c++;
		s++;
	}
	return (c);
}

void	free_str(char **s)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	while (i > 0)
	{
		i--;
		free (s[i]);
	}
	free (s);
}
