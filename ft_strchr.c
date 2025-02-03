/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:36:38 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/13 18:57:27 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = (char *) s;
	i = 0;
	if (c % 256 == 0)
		return (ft_strlen(res) + res);
	while (res[i])
	{
		if (res[i] == c % 256)
			return (&res[i]);
		i++;
	}
	return (NULL);
}
