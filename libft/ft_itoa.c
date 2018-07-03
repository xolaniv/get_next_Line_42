/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:03:46 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/16 12:41:55 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_len(int n)
{
	size_t		count;

	count = 1;
	while (n /= 10)
	{
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	nbr;

	len = get_len(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[--len] = nbr % 10 + '0';
	while (nbr /= 10)
	{
		str[--len] = nbr % 10 + '0';
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
