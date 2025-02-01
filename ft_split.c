/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:54:26 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/29 15:03:17 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_getstring(char const *s, char c)
{
	size_t	len;
	char	*res;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}

static size_t	ft_getcount(char const *s, char c)
{
	size_t	count;
	int		check;

	count = 0;
	check = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!check)
			{
				check = 1;
				count++;
			}
		}
		else
			check = 0;
		s++;
	}
	return (count);
}

static void	*ft_free(char **res, size_t i)
{
	while (i > 0)
		free(res[--i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**res;

	if (!s)
		return (NULL);
	count = ft_getcount(s, c);
	res = (char **)malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		res[i] = ft_getstring(s, c);
		if (!res[i])
			return (ft_free(res, i));
		s += ft_strlen(res[i]);
		i++;
	}
	res[count] = NULL;
	return (res);
}
