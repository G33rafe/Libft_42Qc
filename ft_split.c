/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:01:19 by rajacque          #+#    #+#             */
/*   Updated: 2022/05/05 13:32:37 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordscount(char const *src, char sep)
{
	int	words;

	words = 0;
	while (*src)
	{
		while (*src == sep)
			src++;
		if (*src != sep && *src)
			words++;
		while (*src != sep && *src)
			src++;
	}
	return (words);
}

char	**ft_split(char const *str, char sep)
{
	char	**tab;
	int		words;
	int		i;
	int		len;

	if (!str)
		return (NULL);
	words = wordscount(str, sep);
	tab = ft_calloc(sizeof(char *), words + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < words)
	{
		while (*str && *str == sep)
			str++;
		if (ft_strchr(str, sep))
			len = ft_strchr(str, sep) - str;
		else
			len = ft_strlen(str);
		tab[i] = ft_substr(str, 0, len);
		str += len;
	}
	return (tab);
}
