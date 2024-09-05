/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:11:05 by amandour          #+#    #+#             */
/*   Updated: 2024/05/12 15:29:04 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack **a, t_stack **b, int gr_size)
{
	int	count;

	count = 0;
	find_min(a);
	while ((*a))
	{
		if (count >= 1 && (*a)->index < count)
		{
			push(a, b, 'b');
			count++;
		}
		else if ((*a)->index <= gr_size + count)
		{
			push(a, b, 'b');
			rb(b, 1);
			count++;
		}
		else
			ra(a, 1);
	}
	find_min(b);
}

static int	position_middle(t_stack **b, int len, int big_index)
{
	t_stack	*tmp;
	int		position;
	int		middle;

	tmp = *b;
	middle = len / 2;
	position = 0;
	while (tmp->next != *b)
	{
		if (tmp->index == big_index)
		{
			if (position < middle)
				return (1);
			return (0);
		}
		position++;
		tmp = tmp->next;
	}
	return (0);
}

void	push_back_to_a(t_stack **a, t_stack **b)
{
	int	len;
	int	max_index;

	find_min(b);
	while ((*b))
	{
		len = stack_size(b);
		max_index = len - 1;
		if ((*b)->index == max_index)
		{
			push(b, a, 'a');
		}
		else if (position_middle(b, len, max_index) == 1)
			rb(b, 1);
		else
			rrb(b, 1);
	}
}
