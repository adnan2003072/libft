/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:53:09 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/20 09:02:02 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return ((t_uchar)s1[i] - (t_uchar)s2[i]);
	while (s1[i] && s2[i] && i < n)
	{
		if ((t_uchar)s1[i] != (t_uchar)s2[i])
			return ((t_uchar)s1[i] - (t_uchar)s2[i]);
		i++;
	}
	return (0);
}
