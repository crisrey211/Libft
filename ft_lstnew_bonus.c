/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:53:58 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 17:39:14 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

/* int main(void)
{
	t_list *node = ft_lstnew_bonus("Hello");
	if (node != NULL)
	{
		printf("Contenido del nodo: %s\n", (char *)node->content);
        printf("Siguiente nodo: %p\n", node->next);
	}
	else
		printf("Error al crear el nodo.\n");
	free(node);
	return (0);
} */