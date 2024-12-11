/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:38:44 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 11:12:29 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	temp = ft_calloc(len + 1, sizeof(char));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		temp[i] = s[start + i];
		i++;
	}
	return (temp);
}

/* int main(void)
{
	char str[] = "Christian Reynaltt";
	int start = 5;
	size_t len = 30;
	char *pointer;
	
	pointer = ft_substr(str, start, len);
	return (0);
} */