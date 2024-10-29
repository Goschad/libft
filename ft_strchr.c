/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:48:25 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 20:57:28 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (c > 256)
		c = c - 256;
	while (s[++i])
		if (s[i] == c)
			return (&((char *)s)[i]);
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
