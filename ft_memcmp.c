/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:36:38 by rajacque          #+#    #+#             */
/*   Updated: 2022/04/20 14:31:07 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if ((((unsigned char *)str1)[i]) != (((unsigned char *)str2)[i]))
		{
			return ((((unsigned char *)str1)[i]) - ((unsigned char *)str2)[i]);
		}
		i++;
	}
	return (0);
}
