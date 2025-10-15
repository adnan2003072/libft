/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:31:54 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/15 11:54:44 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const t_uchar	*ss1;
	const t_uchar	*ss2;
	size_t			i;

	if (!s1 || !s2 || n == 0)
		return (0);
	ss1 = (const t_uchar *)s1;
	ss2 = (const t_uchar *)s2;
	i = 0;
	while (ss1[i] && ss2[i] && i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
