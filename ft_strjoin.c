/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:11:06 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 20:58:35 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		len2;
	char	*newstr;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	len2 = 0;
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (0);
	len = 0;
	while (s1[len2])
		newstr[len++] = s1[len2++];
	len2 = 0;
	while (s2[len2])
		newstr[len++] = s2[len2++];
	newstr[len] = '\0';
	return (newstr);
}
