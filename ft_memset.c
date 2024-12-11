/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:50:34 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 02:11:08 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	value;
	size_t			i;

	value = (unsigned char)c;
	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = value;
		i++;
	}
	return (s);
}

/* void main(){
	char str[] = "Christian Reynaltt";
	ft_memset(str,97,9);
	printf("%s\n", str); 
	return;
} */