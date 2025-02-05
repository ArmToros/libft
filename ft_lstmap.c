/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armtoros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:03:12 by armtoros          #+#    #+#             */
/*   Updated: 2025/01/31 12:22:40 by armtoros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	node = new;
	while (lst->next)
	{
		new->next = ft_lstnew(f(lst->next->content));
		if (!new->next)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	return (node);
}
