/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:15:14 by rajacque          #+#    #+#             */
/*   Updated: 2022/05/05 15:17:09 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (len > slen)
		str = ft_calloc((slen + 1), sizeof(char));
	else
		str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (start >= slen)
		return (str);
	i = 0;
	while (i < len && s[i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
