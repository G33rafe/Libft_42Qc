/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:29:43 by rajacque          #+#    #+#             */
/*   Updated: 2022/05/05 15:04:24 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*ptr;

	if (nbr == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = malloc(nbr * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, nbr * size);
	return (ptr);
}
