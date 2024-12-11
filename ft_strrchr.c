/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:10:01 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/03 14:45:08 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
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