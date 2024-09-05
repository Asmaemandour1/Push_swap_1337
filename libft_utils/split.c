/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:43:51 by amandour          #+#    #+#             */
/*   Updated: 2024/05/10 12:50:07 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	count_word(const char *s, char c)
{
	int		i;
	size_t	n;

	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] == c)
		i++;
	n = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			n++;
		i++;
	}
	if (s[i] == '\0' && s[i - 1] != c)
		n++;
	return (n);
}

static size_t	lenght_word(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (*str && *str != c)
	{
		str++;
		len++;
	}
	return (len);
}

static void	free_str1(char **str, size_t i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
}

static char	**allocate_str(char const *s, char **str, char c, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (j < n)
	{
		while (s[i] && s[i] == c)
			i++;
		str[j] = ft_substr(s, i, lenght_word(&s[i], c));
		if (!str[j])
		{
			free_str1(str, j);
			return (0);
		}
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char *s, char c)
{
	size_t	n;
	char	**p;

	if (!s)
		return (NULL);
	n = count_word(s, c);
	p = (char **)malloc((n + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	p = allocate_str(s, p, c, n);
	free(s);
	return (p);
}
