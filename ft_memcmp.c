/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:59:16 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 03:21:11 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* int main() {
    char str1[] = "Hola";
    char str2[] = "Hola";
    char str3[] = "Mundo";

    if (ft_memcmp(str1, str2, 4) == 0) {
        printf("str1 y str2 son iguales.\n");
    } else {
        printf("str1 y str2 son diferentes.\n");
    }
    if (ft_memcmp(str1, str3, 4) == 0) {
        printf("str1 y str3 son iguales.\n");
    } else {
        printf("str1 y str3 son diferentes.\n");
    }
    return 0;
} */