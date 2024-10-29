/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:06:52 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 20:57:57 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(s1);
	i = -1;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (++i < len)
		dest[i] = s1[i];
	dest[i] = '\0';
	return (dest);
}
