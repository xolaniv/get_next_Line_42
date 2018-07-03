/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 18:08:08 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/16 12:36:26 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	d;
	char	**new_str;

	i = 0;
	j = 0;
	d = 0;
	if (!s || !c)
		return (NULL);
	if (!(new_str = (char **)malloc(sizeof(new_str) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i] && i < ft_strlen(s) + 1)
			i++;
		if (i > j)
			new_str[d++] = ft_strsub(s, j, (i - j));
	}
	new_str[d] = NULL;
	return (new_str);
}
