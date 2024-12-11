/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:33:10 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/09 20:19:30 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* void ft_tolower_wrapper(unsigned int index, char *c)
{
    *c = (char)ft_tolower((unsigned char)*c);
}

int main(int argc, char const *argv[])
{
	char str[] = "CHRISTIAN";
	ft_striteri(str, ft_tolower_wrapper);
    printf("%s\n", str);
	return 0;
} */