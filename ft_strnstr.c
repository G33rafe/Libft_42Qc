/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:11:57 by rajacque          #+#    #+#             */
/*   Updated: 2022/04/27 12:26:01 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == find[0])
		{
			j = 0;
			while (str[i + j] == find[j] && (i + j) < len)
			{
				if (find[j + 1] == '\0')
					return ((char *)&str[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
