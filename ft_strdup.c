/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:15:40 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/14 16:36:37 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	res = (char *)malloc(len);
	if (!res)
		return (0);
	ft_memcpy(res, s, len);
	return (res);
}
