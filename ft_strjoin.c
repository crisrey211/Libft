/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:39:54 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/13 02:36:50 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	lengs1;
	size_t	lengs2;

	if (!s1 || !s2)
		return (0);
	lengs1 = ft_strlen(s1);
	lengs2 = ft_strlen(s2);
	temp = malloc(sizeof(char) * (lengs1 + lengs2 + 1));
	if (!temp)
		return (0);
	ft_memcpy(temp, s1, lengs1);
	ft_memcpy(temp + lengs1, s2, lengs2);
	temp[lengs1 + lengs2] = '\0';
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