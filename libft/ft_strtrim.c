/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 15:53:55 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/17 12:25:31 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		k;
	char	*str;
	int		j;
	int		i;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && s[i] != 0)
		j--;
	str = ft_strnew(j - i + 1);
	if (str == NULL)
		return (NULL);
	while (i <= j)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[j + 1] = '\0';
	return (str);
}
