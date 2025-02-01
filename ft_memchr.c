/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:19:56 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/31 12:41:52 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	ch = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*(ch + i) == (unsigned char)c)
			return ((void *)(ch + i));
		i++;
	}
	return (NULL);
}
