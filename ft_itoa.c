/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:07:58 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 20:55:10 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	n;
	int		i;

	n = nbr;
	i = ft_len(n);
	if (nbr == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nbr < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
