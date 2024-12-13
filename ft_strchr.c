/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:10:03 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/12 23:18:32 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	i = 0;
	a = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == a)
	{
		return ((char *) &s[i]);
	}
	return (0);
}

/* void main()
{
	char cadena[30] = "https://www.tutorialspoint.com";
	char p = '.';
	char *result = ft_strchr(cadena,p);
	if(result != NULL)
	{
		printf("Encontrado:%s en la dirección\n",result);
	}
	return;
} */
