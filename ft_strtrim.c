/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creynalt <creynalt@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:42:24 by creynalt          #+#    #+#             */
/*   Updated: 2024/12/12 20:57:54 by creynalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	get_start_index(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end_index(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0 && is_in_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = get_start_index(s1, set);
	end = get_end_index(s1, set);
	if (end <= start)
		return ((char *)ft_calloc(1, sizeof(char)));
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	while (start < end)
	{
		trimmed_str[i] = s1[start];
		i++;
		start++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}

/* int main()
{
    char str[] = "          Hello, World          ";
    char set[] = " ";

    char *trimmed_str = ft_strtrim(str, set);
    if (trimmed_str)
    {
        printf("Original: '%s'\n", str);
        printf("Trimmed: '%s'\n", trimmed_str);
        free(trimmed_str);
    }
    return 0;
} */