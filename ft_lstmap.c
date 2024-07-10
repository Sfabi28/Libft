/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:42:35 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/16 14:42:37 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_cont;

	if (!lst || !del || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_cont = ft_lstnew(f(lst->content));
		if (!(new_cont))
			return (NULL);
		ft_lstadd_back(&new_list, new_cont);
		lst = lst->next;
	}
	return (new_list);
}
