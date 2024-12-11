/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:39:54 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 11:52:42 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	temp = malloc(ft_strlen(s1)+ft_strlen(s2));
	if (!temp)
		return (NULL);
	while (s1[i])
	{
		temp[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		temp[j] = s2[i];
		j++;
		i++;
	}
	temp[j] = 0;
	return (temp);
}

/* int main(void)
{
	char *join;
	char str1[] = "Christian";
	char str2[] = "Reynaltt";
	join = ft_strjoin(str1, str2);
	printf("%s\n", join);
} */