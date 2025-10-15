/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:24:32 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/15 11:53:34 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_uchar	*ss;
	size_t	i;

	if (!s)
		return (0);
	ss = (t_uchar *)s;
	i = 0;
	while (ss[i] && i < n)
	{
		if (ss[i] == (t_uchar) c)
			return ((void *)ss);
		i++;
	}
	return ((void *)ss);
}
