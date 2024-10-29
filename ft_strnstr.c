/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:10:00 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 21:02:12 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (!haystack && len <= 0)
		return (0);
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j] && haystack[i]) && (i + j) < len)
		{
			j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	printf("strnstr = %s\n\n", strnstr("abc", "xyz", 0));
	printf("ft_strnstr = %s\n", ft_strnstr("abc", "xyz", 0));
}
*/
