/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:44:43 by amandour          #+#    #+#             */
/*   Updated: 2024/05/07 16:02:24 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	int		c;
	size_t	result;

	c = 1;
	result = 0;
	while (*str == 32 || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			c = -c;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		result = result * 10 + (*str) - 48;
		str++;
	}
	return (result * c);
}
