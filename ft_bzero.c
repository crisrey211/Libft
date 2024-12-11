/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:08:59 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 03:18:14 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *) s;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

/* int main(void)
{
	char str[] = "Christian";
	ft_bzero(str, 1);
	printf("%s\n", str);
	return 0;
} */