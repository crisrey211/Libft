/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:59:01 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 03:54:28 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t			i;

	str = (unsigned char *) s;
	search = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == search)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char str[] = "Hola mundo!";
	char c = 'm';
	char *result = ft_memchr(str,c,10);
	printf("%s\n",result);
} */