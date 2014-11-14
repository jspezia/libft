/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 09:34:28 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:33:35 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

static int				ft_read(char **fbuf, char **line, int const fd);

int						get_next_line(int const fd, char **line)
{
	int					ret;
	char				*tmp;
	char				*fbuf;
	t_buffer			*ptr;
	static t_buffer		*list = NULL;

	ptr = lstinit(&list, fd);
	fbuf = ptr->fbuf;
	if ((ret = ft_read(&fbuf, line, fd)) <= 0)
		return (ret);
	if (ft_strchr(fbuf, '\n'))
	{
		ret = ft_strchr(fbuf, '\n') - fbuf;
		if (!(*line = ft_strnew(ret)))
			return (-1);
		ft_strncpy(*line, fbuf, ret);
		if (!(tmp = ft_strsub(fbuf, ret + 1, ft_strlen(fbuf) - ret)))
			return (-1);
		free(fbuf);
		ptr->fbuf = tmp;
	}
	return (1);
}

static int				ft_read(char **fbuf, char **line, int const fd)
{
	char				*buf;
	char				*tmp;
	int					ret;

	if (!(buf = (char *) malloc(BUFF_SIZE + 1)))
		return (-1);
	while (!(ft_strchr(*fbuf, '\n')))
	{
		if (((ret = read(fd, buf, BUFF_SIZE)) == -1) || (!ret))
		{
			if (ret == -1)
				return (-1);
			*line = (**fbuf == '\0') ? NULL : ft_strdup(*fbuf);
			ret = (**fbuf == '\0') ? 0 : 1;
			ft_bzero(*fbuf, 1);
			return (ret);
		}
		buf[ret] = '\0';
		if (!(tmp = ft_strjoin(*fbuf, buf)))
			return (-1);
		free(*fbuf);
		*fbuf = tmp;
	}
	free(buf);
	return (1);
}

t_buffer				*lstinit(t_buffer **list, int const fd)
{
	t_buffer			*ptr;

	if (!(*list))
	{
		*list = lstadd(list, fd);
		ptr = *list;
	}
	else
	{
		ptr = *list;
		while (ptr != NULL)
		{
			if (ptr->fd == fd)
				return (ptr);
			ptr = ptr->next;
		}
	}
	ptr = lstadd(list, fd);
	return (ptr);
}

t_buffer				*lstadd(t_buffer **list, int const fd)
{
	t_buffer			*entry;

	if (!(*list))
	{
		if (!(entry = (t_buffer *) malloc(sizeof(t_buffer))))
			return (NULL);
		if (!(entry->fbuf = ft_memalloc(1)))
			return (NULL);
		entry->next = NULL;
		entry->fd = fd;
		return (*list = entry);
	}
	if (!(entry = (t_buffer *) malloc(sizeof(t_buffer))))
		return (NULL);
	if (!(entry->fbuf = ft_memalloc(1)))
		return (NULL);
	entry->next = *list;
	entry->fd = fd;
	*list = entry;
	return (*list);
}
