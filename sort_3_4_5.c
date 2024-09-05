/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:45:45 by amandour          #+#    #+#             */
/*   Updated: 2024/05/11 18:42:05 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	if ((*a)->data > (*a)->next->data
		&& (*a)->data > (*a)->next->next->data
		&& (*a)->next->data < (*a)->next->next->data)
		ra(a, 1);
	else if ((*a)->data > (*a)->next->data
		&& (*a)->next->data > (*a)->next->next->data)
	{
		swap_a(a, 1);
		rra(a, 1);
	}
	else if ((*a)->data < (*a)->next->data
		&& (*a)->next->data > (*a)->next->next->data
		&& (*a)->data < (*a)->next->next->data)
	{
		swap_a(a, 1);
		ra(a, 1);
	}
	else if ((*a)->data > (*a)->next->data
		&& (*a)->data < (*a)->next->next->data)
		swap_a(a, 1);
	else if ((*a)->data < (*a)->next->data
		&& (*a)->next->data > (*a)->next->next->data
		&& (*a)->data > (*a)->next->next->data)
		rra(a, 1);
}

void	find_min(t_stack **s)
{
	t_stack	*min;
	int		i;

	if (!(*s))
		return ;
	i = 0;
	min = *s;
	while (i <= stack_size(s))
	{
		if (min->data < (*s)->data)
			(*s)->index++;
		min = min->next;
		if (min == (*s))
		{
			if (i == stack_size(s))
				break ;
			(*s) = (*s)->next;
			min = min->next;
			(*s)->index = 0;
			i++;
		}
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	find_min(a);
	if ((*a)->next->index == 0)
		ra(a, 1);
	else if ((*a)->next->next->index == 0)
	{
		ra(a, 1);
		ra(a, 1);
	}
	else if ((*a)->prev->index == 0)
		rra(a, 1);
	push(a, b, 'b');
	sort_3(a);
	push(b, a, 'a');
}

void	sort_5(t_stack **a, t_stack **b)
{
	find_min(a);
	if ((*a)->next->index == 0)
		ra(a, 1);
	else if ((*a)->next->next->index == 0)
	{
		ra(a, 1);
		ra(a, 1);
	}
	else if ((*a)->prev->index == 0)
		rra(a, 1);
	else if ((*a)->prev->prev->index == 0)
	{
		rra(a, 1);
		rra(a, 1);
	}
	push(a, b, 'b');
	sort_4(a, b);
	push(b, a, 'a');
}
