/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:17:48 by amandour          #+#    #+#             */
/*   Updated: 2024/05/14 16:35:14 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*prev;
	int				index;
}					t_stack;

size_t	ft_strlen(const char *s);
char	**ft_split(char *s, char c);
char	*ft_strjoin(int ac, char **av);
void	free_str(char **s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
int		stack_size(t_stack **head);
void	ft_swap(int *a, int *b);
int		ft_atoi(const char *str);
void	add_end(t_stack **start, t_stack *new_node);
void	swap_a(t_stack **a, int i);
void	swap_b(t_stack **b, int i);
void	ra(t_stack **a, int i);
void	rb(t_stack **b, int i);
void	rra(t_stack **a, int i);
void	rrb(t_stack **b, int i);
void	sort_3(t_stack **a);
void	sort_5(t_stack **a, t_stack **b);
void	sort_4(t_stack **a, t_stack **b);
int		check_arg(int ac, char **av);
t_stack	*create_node(int value);
void	find_min(t_stack **s);
void	sort_stack(t_stack **a, t_stack **b);
int		sorted(t_stack **stack);
int		check_spaces(char **av);
int		check_integers(char **av);
int		check_minmax(long long nbr);
void	push(t_stack **src, t_stack **dest, char c);
void	add_first(t_stack **start, t_stack *new_node);
void	print_error(void);
void	push_back_to_a(t_stack **a, t_stack **b);
void	push_to_b(t_stack **a, t_stack **b, int gr_size);
void	free_stack(t_stack **stack);

#endif