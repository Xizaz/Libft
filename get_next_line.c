/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:19:16 by jcornil           #+#    #+#             */
/*   Updated: 2018/11/14 10:19:20 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		read_line(int fd, char **buf)
{
	char		*temp;
	char		*leak;
	int			b_read;

	temp = ft_strnew(BUFF_SIZE + 1);
	while ((b_read = read(fd, temp, BUFF_SIZE)) > 0)
	{
		leak = buf[fd];
		buf[fd] = ft_strjoin(buf[fd], temp);
		free(leak);
		if (!buf[fd])
			buf[fd] = ft_strdup(temp);
		ft_bzero(temp, BUFF_SIZE);
	}
	if (buf[fd] == NULL)
		buf[fd] = ft_strnew(1);
	free(temp);
	if (b_read)
		return (1);
	return (0);
}

int		next_line(int fd, char **buf, char **line)
{
	char	*cur;
	char	*leak;

	if ((cur = ft_strchr(buf[fd], '\n')))
	{
		leak = buf[fd];
		*cur = '\0';
		*line = ft_strdup(buf[fd]);
		buf[fd] = ft_strdup(cur + 1);
		free(leak);
		return (1);
	}
	if (*buf[fd])
	{
		*line = ft_strdup(buf[fd]);
		buf[fd] = ft_strnew(BUFF_SIZE + 1);
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static	char	*buf[5000];

	if (!line || fd < 0 || BUFF_SIZE < 0 || fd > 5000)
		return (-1);
	if (read_line(fd, &buf[fd]))
		return (-1);
	if (next_line(fd, &buf[fd], line))
		return (1);
	return (0);
}
