/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:09:42 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/11 17:05:09 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		longsrc;
	int		longdst;
	int		i;
	char	*temp;

	longdst = ft_strlen(dst);
	longsrc = ft_strlen(src);
	i = 0;
	temp = (char *)src;
	if (longdst >= size)
		return (longsrc + size);
	while (src[i] && longdst < size - 1)
	{
		dst[longdst] = src[i];
		longdst++;
		i++;
	}
	dst[longdst] = '\0';
	return (longdst + longsrc);
}

/* void main()
{
	char destino[30] = "Christian";
	size_t result = ft_strlcat(destino," Reynaltt",20);
	return;
} */