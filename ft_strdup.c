/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:52:27 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/22 16:58:59 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s1);
	res = (char *) malloc(len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, len + 1);
	return (res);
}
