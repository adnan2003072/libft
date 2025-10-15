/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:01:42 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/15 15:29:48 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delimiter(char c1, char c2)
{
	return (c1 == c2);
}

static	void	skip_delimiters(char const *s, char c, size_t *i)
{
	while (s[*i] && is_delimiter(s[*i], c))
		(*i)++;
}

static size_t	num_strs(char const *s, char c)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	while (s[i])
	{
		skip_delimiters(s, c, &i);
		n++;
		while (s[i] && !is_delimiter(s[i], c))
			i++;
	}
	return (n);
}

static char	**allocate_memory(char const *s, char c)
{
	char	**res;
	size_t	current;
	size_t	i;
	size_t	len;

	res = (char **)malloc(sizeof(char *) * num_strs(s, c));
	current = 0;
	i = 0;
	while (s[i])
	{
		skip_delimiters(s, c, &i);
		len = 0;
		while (s[i] && !is_delimiter(s[i], c))
		{
			i++;
			len++;
		}
		res[current] = (char *)malloc(len + 1);
		current++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	**tmp;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	res = allocate_memory(s, c);
	tmp = res;
	i = 0;
	while (*tmp && s[i])
	{
		skip_delimiters(s, c, &i);
		j = 0;
		while (s[i] && !is_delimiter(s[i], c))
		{
			(*tmp)[j] = s[i];
			i++;
			j++;
		}
		(*tmp)[j] = '\0';
		tmp++;
	}
	*tmp = (void *)0;
	return (res);
}
