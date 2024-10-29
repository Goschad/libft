/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:53:31 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 21:00:45 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (src[j] != 0 && i + 1 < dstsize)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
