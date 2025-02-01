/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:44:56 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/29 16:03:31 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec_clear(t_list **t, void (*del)(void*))
{
	if (!*t)
		return ;
	rec_clear(&((*t)->next), del);
	del((*t)->content);
	free(*t);
	*t = NULL;
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	rec_clear(lst, del);
	lst = NULL;
}
