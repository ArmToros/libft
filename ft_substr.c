/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:00:39 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/29 14:33:57 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	dif;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	dif = s_len - start;
	if (dif > len)
		dif = len;
	res = (char *)malloc(dif + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, dif + 1);
	res[dif] = '\0';
	return (res);
}
