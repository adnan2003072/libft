/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:02:16 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/15 17:17:53 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	t_uchar			*d;
	const t_uchar	*s;

	if (!dest || !src)
		return (0);
	d = dest;
	s = src;
	while (n--)
		*(d++) = *(s++);
	return (dest);
}
