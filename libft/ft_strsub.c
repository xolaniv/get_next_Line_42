/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 10:55:08 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/06/17 13:34:35 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_s;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	new_s = ft_strnew(len);
	if (!new_s)
		return (NULL);
	return (ft_strncpy(new_s, s + start, len));
}
