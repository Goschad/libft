/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwen <marwen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:53:36 by mbouaza           #+#    #+#             */
/*   Updated: 2024/10/29 21:53:51 by marwen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substr_remastered(char const *s, unsigned int start, size_t len)
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
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (free(str), NULL);
	while (s[++i])
		if (i >= start && j < len)
			str[j++] = s[i];
	str[j] = '\0';
	return (str);
}

static void	*free_all(char **tab, int w)
{
	int	i;

	i = 0;
	while (i != w)
		free (tab[i++]);
	free(tab);
	return (NULL);
}

static int	ft_count_word(char const *s, char c)
{
	char	str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = c;
	while (s[i] != '\0')
	{
		if (str == c && s[i] != c)
			j++;
		str = s[i++];
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**tab;

	i = 0;
	j = 0;
	word = 0;
	tab = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (tab == NULL)
		return (0);
	while (s[j] && s[i] && word < ft_count_word(s, c))
	{
		i = j;
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		tab[word++] = ft_substr_remastered(s, i, j - i);
		if (!tab[word - 1])
			return (free_all(tab, word));
	}
	tab[word] = NULL;
	return (tab);
}
