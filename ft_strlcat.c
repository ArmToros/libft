/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 20:31:25 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/28 19:43:53 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	l;
	size_t	i;

	len = 0;
	i = 0;
	if ((!dst || !src) && !dstsize)
		return (0);
	while (dst[len] != '\0' && len < dstsize)
		len++;
	l = ft_strlen(src);
	if (len < dstsize)
	{
		while (src[i] != '\0' && (len + i) < dstsize - 1)
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	return (l + len);
}
