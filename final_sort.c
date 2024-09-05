/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:25:12 by amandour          #+#    #+#             */
/*   Updated: 2024/05/14 15:35:16 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **a, t_stack **b)
{
	if (stack_size(a) == 2)
		swap_a(a, 1);
	else if (stack_size(a) == 3)
		sort_3(a);
	else if (stack_size(a) == 4)
		sort_4(a, b);
	else if (stack_size(a) == 5)
		sort_5(a, b);
	else
	{
		if (stack_size(a) <= 100 && stack_size(a) >= 6)
			push_to_b(a, b, 15);
		else
			push_to_b(a, b, 30);
		push_back_to_a(a, b);
	}
}
