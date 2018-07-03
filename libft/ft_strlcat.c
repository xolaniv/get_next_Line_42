/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 14:21:52 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/15 17:27:48 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while (src[k] != '\0' && (i + k + 1) < dstsize)
	{
		dst[i + k] = src[k];
		k++;
	}
	if ((i + k) < dstsize)
		dst[i + k] = '\0';
	return (i + ft_strlen(src));
}
