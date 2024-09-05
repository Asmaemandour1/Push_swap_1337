/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tools1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:50:15 by amandour          #+#    #+#             */
/*   Updated: 2024/05/12 15:46:24 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a, int i)
{
	if (!a)
		return ;
	if (i)
		write(1, "sa\n", 3);
	if (stack_size(a) < 2)
		return ;
	ft_swap(&(*a)->data, &(*a)->next->data);
}

void	swap_b(t_stack **b, int i)
{
	if (!b)
		return ;
	if (i)
		write(1, "sb\n", 3);
	if (stack_size(b) < 2)
		return ;
	ft_swap(&(*b)->data, &(*b)->next->data);
}
