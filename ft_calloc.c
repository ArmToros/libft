/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:37:24 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/22 17:30:12 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*t;
	size_t	i;
	size_t	len;

	len = count * size;
	t = malloc(count * size);
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		t[i++] = 0;
	return ((void *) t);
}
