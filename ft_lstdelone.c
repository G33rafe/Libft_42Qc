/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:58:37 by rajacque          #+#    #+#             */
/*   Updated: 2022/05/12 14:03:17 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (del)(void *))
{
	if (!del || !lst)
		return ;
	if (lst)
	{
		(*del)(lst -> content);
		free(lst);
	}
}
