/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 17:35:18 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/15 18:17:55 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int				i;
	int				j;
	int				no;
	unsigned char	*str;

	i = 0;
	j = 0;
	str = (unsigned char *)s2;
	no = (int)n;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (j < no && s2[j] != '\0')
	{
		s1[j + i] = str[j];
		j++;
	}
	s1[j + i] = '\0';
	return (s1);
}
