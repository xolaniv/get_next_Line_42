/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 11:55:26 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/15 17:26:03 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*fstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if ((fstr = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_strcpy(fstr, s1);
	ft_strcat(fstr, s2);
	fstr[size] = '\0';
	return (fstr);
}
