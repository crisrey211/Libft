/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:10:01 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/12 23:25:15 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			res = (char *)(s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		res = (char *)(s + i);
	return (res);
}

/* void main()
{
	char cadena[30] = "https://www.tutorialspoint.com";
	char p = '.';
	char *result = ft_strrchr(cadena,p);
	if(result != NULL)
	{
		printf("Encontrado:%s en la dirección\n",result);
	}
	return;
} */