/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:55:53 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/15 16:29:30 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!(ft_strlen(needle)))
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		n = 0;
		while (haystack[n + i] == needle[n])
		{
			if (n == ft_strlen(needle) - 1)
				return ((char*)&haystack[i]);
			n++;
		}
		i++;
	}
	return (NULL);
}
