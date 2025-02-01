/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:33:10 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/28 19:57:51 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*d1;
	char	*d2;
	size_t	i;

	d1 = (char *) s1;
	d2 = (char *) s2;
	i = 0;
	while (i < n)
	{
		if (*d1 != *d2)
			return ((unsigned char)*d1 - (unsigned char)*d2);
		d1++;
		d2++;
		i++;
	}
	return (0);
}
