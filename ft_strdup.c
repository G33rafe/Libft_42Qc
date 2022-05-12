/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:49:45 by rajacque          #+#    #+#             */
/*   Updated: 2022/05/05 15:06:43 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	while (src[len])
		len++;
	new = ft_calloc(sizeof(*new), len + 1);
	if (!new)
		return (0);
	while (i < len)
	{
		new[i] = src[i];
		i++;
	}
	return (new);
}
