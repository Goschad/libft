/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:47:09 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 21:01:57 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	str = ft_strdup(s);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f((unsigned int)i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
