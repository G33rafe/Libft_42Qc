/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:14:05 by rajacque          #+#    #+#             */
/*   Updated: 2022/05/03 13:52:56 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, (char *)s1, len);
	ft_strlcat(str, (char *)s2, len);
	return (str);
}
