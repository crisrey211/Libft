/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:31:36 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/11 12:58:53 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc(ft_strlen(s)+1 * sizeof(char));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

char	ft_toupper_wrapper(unsigned int i, char c)
{
	return (ft_toupper(c));
}
/* int main()
{
	char s1 [] = "christian está en urduliz\n";
	printf("%s",ft_strmapi(s1,ft_toupper_wrapper));
} */