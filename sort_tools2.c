/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tools2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:17:48 by amandour          #+#    #+#             */
/*   Updated: 2024/06/12 11:39:53 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void	ra(t_stack **a, int i)
{
	if (!a)
		return ;
	if (i)
		write(1, "ra\n", 3);
	if (stack_size(a) < 2)
		return ;
	(*a) = (*a)-> next;
	printf("==> %d  %d \n", (*a)->data, (*a)->next->data);
}

void	rb(t_stack **b, int i)
{
	if (!b)
		return ;
	if (i)
		write(1, "rb\n", 3);
	if (stack_size(b) < 2)
		return ;
	(*b) = (*b)-> next;
}

void	rra(t_stack **a, int i)
{
	if (!a)
		return ;
	if (i)
		write(1, "rra\n", 4);
	if (stack_size(a) < 2)
		return ;
	(*a) = (*a)->prev;
}