/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:58:18 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 21:55:58 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = -1;
	str = NULL;
	if (s == NULL)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (s[++i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
	}
	str[j] = '\0';
	return (str);
}