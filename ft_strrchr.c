/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:59:06 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/13 18:11:35 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = (int) ft_strlen(s);
	res = (char *) s;
	while (i >= 0)
	{
		if (res[i] == c % 256)
			return (&res[i]);
		i--;
	}
	return (NULL);
}
