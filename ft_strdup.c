/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 23:48:24 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/04 10:13:12 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(ft_strlen(s)+1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/* int main() {
    const char *original = "Christian Reynaltt";
    char *copia = ft_strdup(original);
    
    if (copia != NULL) {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", copia);
        free(copia);
    }
    else
        printf("Ha habido un error.\n");
    return 0;
} */
