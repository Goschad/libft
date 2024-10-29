/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:27:35 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 21:02:05 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (ft_isascii(s1[i]) == 0 || ft_isascii(s2[i]) == 0)
			i++;
		if (s1[i] > s2[i] || !s2[i])
			return (1);
		if (s1[i] < s2[i] || !s1[i])
			return (-1);
		i++;
	}
	return (0);
}
