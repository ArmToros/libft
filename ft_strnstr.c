/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:57:44 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/13 20:28:26 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;
	char	*res;

	res = (char *) haystack;
	if (needle[0] == '\0')
		return (res);
	else
	{
		i = 0;
		while (i < len && haystack[i] && res != NULL)
		{
			l = 0;
			res = ft_strchr(haystack + i, needle[0]);
			i = res - haystack;
			while (i + l < len && needle[l] && needle[l] == res[l])
				l++;
			if (needle[l] == '\0')
				return (res);
			i++;
		}
	}
	return (NULL);
}
