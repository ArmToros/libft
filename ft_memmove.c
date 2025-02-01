/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:09:47 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/29 15:17:33 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d == s || len == 0)
		return ((void *)dst);
	if (d < s)
	{
		dst = ft_memcpy(dst, src, len);
	}
	else
	{
		i = len + 1;
		while (--i > 0)
			d[i - 1] = s[i - 1];
	}
	return ((void *)dst);
}
