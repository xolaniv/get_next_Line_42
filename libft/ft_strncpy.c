/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:20:04 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/15 17:47:17 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		sz;
	int		i;

	i = 0;
	sz = (int)len;
	while (i < sz && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < sz)
		dst[i++] = '\0';
	return (dst);
}
