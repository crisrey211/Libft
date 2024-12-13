/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:29:26 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/12 22:43:52 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_item;
	t_list	*temp;

	/* if (!lst || !f)
		return (NULL);
	first_item = ft_lstnew(f(lst->content));
	if (first_item == NULL)
		return (NULL);
	lst = lst -> next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&first_item, del);
			return (NULL);
		}
	} */
	return (first_item);
}
