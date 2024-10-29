/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:46:16 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 20:53:23 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(const char *str, int i)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			sign = 1;
		else if (str[i] == '-')
			sign = -1;
		num++;
		i++;
	}
	if (num > 1)
		return (42);
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	sign = ft_sign(str, i);
	if (sign == 42)
		return (0);
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = result * sign;
	return (result);
}
