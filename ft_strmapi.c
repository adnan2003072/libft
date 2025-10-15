/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:57:00 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/15 16:00:59 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s)
		return (NULL);
	res = (char *)malloc(ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, (char)s[i]);
		i++;
	}
	res = '\0';
	return (res);
}
