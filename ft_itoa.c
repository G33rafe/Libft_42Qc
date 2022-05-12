/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <rajacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:01:16 by rajacque          #+#    #+#             */
/*   Updated: 2022/05/10 11:46:21 by rajacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_input(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = len_input(n) - 1;
	str = ft_calloc(sizeof(char), len_input(n) + 1);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(str, "-2147483648", 11));
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		if (len == 0 && sign == 1)
			str[0] = '-';
		len--;
	}
	return (str);
}
