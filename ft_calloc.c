/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzkra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:22:06 by abouzkra          #+#    #+#             */
/*   Updated: 2025/10/19 09:35:14 by abouzkra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;
	size_t	size_max;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	res = (char *)malloc(size * nmemb);
	size_max = ~(0);
	if ((unsigned long)size * nmemb > size_max
		|| !res)
		return (0);
	ft_bzero(res, size * nmemb);
	return (res);
}
