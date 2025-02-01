/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:10:28 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/22 16:59:03 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	rec(size_t i, char *c, size_t len, int n)
{
	char	t;

	if (n < 10)
		c[i] = n + '0';
	else
	{
		t = n % 10 + '0';
		rec(i - 1, c, len, n / 10);
		c[i] = t;
	}
}

char	*ft_itoa(int n)
{
	char	*c;
	size_t	i;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
	{
		len = ft_intlen(n);
		c = (char *)malloc(sizeof(char) * len + 1);
		if (c == NULL)
			return (NULL);
		c[len] = '\0';
		i = 0;
		if (n < 0)
		{
			c[i++] = '-';
			n *= -1;
		}
		i = len - 1;
		rec(i, c, len, n);
		return (c);
	}
}
