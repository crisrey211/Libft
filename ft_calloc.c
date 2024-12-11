/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 23:48:08 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/11 14:29:59 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;

	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, nmemb * size);
	return (tmp);
}

/* int main()
{
    size_t count = 9;
    size_t size = sizeof(char);

    char *ptr = (char *)ft_calloc(count, size);
    if (ptr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }
    size_t i = 0;
    while (i < count) {
        printf("ptr[%zu] = %d\n", i, ptr[i]);
        i++;
    }
    free(ptr);
    return 0;
} */