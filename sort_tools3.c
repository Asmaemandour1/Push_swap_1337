/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tools3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:59:11 by amandour          #+#    #+#             */
/*   Updated: 2024/05/12 15:47:39 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **b, int i)
{
	if (!b)
		return ;
	if (i)
		write(1, "rrb\n", 4);
	if (stack_size(b) < 2)
		return ;
	(*b) = (*b)->prev;
}

void	push(t_stack **src, t_stack **dest, char c)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!src)
		return ;
	tmp = *src;
	last = (*src)->prev;
	if ((*src) == last)
		(*src) = NULL;
	else
	{
		(*src) = (*src)->next;
		(*src)->prev = last;
		last->next = (*src);
	}
	add_first(dest, tmp);
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}
