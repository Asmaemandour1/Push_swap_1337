/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:59:53 by amandour          #+#    #+#             */
/*   Updated: 2024/05/12 15:44:39 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	stack_size(t_stack **head)
{
	t_stack	*tmp;
	int		count;

	tmp = *head;
	count = 1;
	while (tmp)
	{
		if (tmp->next == *head)
			break ;
		count++;
		tmp = tmp -> next;
	}
	return (count);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
}
