/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:24:58 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 21:54:11 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		i;
	char	n;

	i = 0;
	n = '\n';
	if (s != NULL)
	{
		while (s[i])
			ft_putchar_fd(s[i++], fd);
		ft_putchar_fd(n, fd);
	}
}
