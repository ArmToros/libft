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
	t_list	*res;
	t_list	*new_node;
	void	*new_content;

	res = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_lstclear(&res, del), NULL);
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (del(new_content), ft_lstclear(&res, del), NULL);
		ft_lstadd_back(&res, new_node);
		lst = lst->next;
	}
	return (res);
}
