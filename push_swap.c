/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:19:34 by amandour          #+#    #+#             */
/*   Updated: 2024/06/12 11:40:07 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return (0);
	tmp = *stack;
	while (tmp->next != *stack)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	b = NULL;
	i = -1;
	if (ac > 1)
	{
		if (check_arg(ac, av) != 0)
			return (print_error(), 1);
		av = ft_split(ft_strjoin(ac, av), ' ');
		if (!av)
			return (1);
		a = NULL;
		while (av[++i])
			add_end(&a, create_node(ft_atoi(av[i])));
		free_str(av);
		if (sorted(&a))
			return (free_stack(&a), 0);
		sort_stack(&a, &b);
		free_stack(&a);
	}
	return (0);
}
