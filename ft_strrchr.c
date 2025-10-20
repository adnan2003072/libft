/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:48:57 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/20 08:59:32 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (i == 0)
		return (NULL);
	while (1)
	{
		if (s[i] == c)
			return ((char *)s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
