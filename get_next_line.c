/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:06:16 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/07/03 17:17:07 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		end_line(char *buf)
{
	int				i;

	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		return (1);
	return (0);
}

static int		get_line(const int fd, char *buf, char *strs[fd])
{
	int			ln;
	char		*temp;

	while ((end_line(buf) != 1) && ((ln = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[ln] = '\0';
		temp = strs[fd];
		strs[fd] = ft_strjoin(temp, buf);
		ft_strdel(&temp);
	}
	ft_strdel(&buf);
	if (ln < 0)
		return (-1);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	int			ln;
	char		*buf;
	char		*str;
	char		*temp;
	static char	*strs[2147483647];

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	if (!strs[fd])
		strs[fd] = ft_strnew(0);
	if ((ln = get_line(fd, buf, strs)) == -1)
		return (-1);
	if ((str = ft_strchr(strs[fd], '\n')))
	{
		*line = ft_strsub(strs[fd], 0, str - strs[fd]);
		temp = strs[fd];
		strs[fd] = ft_strdup(str + 1);
		ft_strdel(&temp);
		return (1);
	}
	*line = ft_strdup(strs[fd]);
	ft_strdel(&strs[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
