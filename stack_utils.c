/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:55:48 by amandour          #+#    #+#             */
/*   Updated: 2024/05/12 15:40:42 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int value)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->data = value;
	new_node->next = new_node;
	new_node->prev = new_node;
	return (new_node);
}

void	add_first(t_stack **start, t_stack *new_node)
{
	if (!new_node)
		return ;
	new_node->next = new_node;
	new_node->prev = new_node;
	if (*start)
	{
		new_node->next = *start;
		new_node->prev = (*start)->prev;
		(*start)->prev->next = new_node;
		(*start)->prev = new_node;
	}
	(*start) = new_node;
}

void	add_end(t_stack **start, t_stack *new_node)
{
	t_stack	*current_node;

	if (!new_node)
		return ;
	current_node = *start;
	if (*start == NULL)
	{
		*start = new_node;
		return ;
	}
	else
	{
		while (current_node->next != *start)
			current_node = current_node->next;
		current_node->next = new_node;
		new_node->next = *start;
		(*start)->prev = new_node;
		new_node->prev = current_node;
	}
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp_0;

	if (!stack || !(*stack))
		return ;
	tmp_0 = *stack;
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	while (*stack != tmp_0)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
