/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:31:36 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/13 02:57:05 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*res;

	if (!s || !(*f))
		return (0);
	i = 0;
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (0);
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
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