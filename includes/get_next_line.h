/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 09:34:59 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:01:21 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define BUFF_SIZE 4096

typedef struct		s_buffer
{
	int				fd;
	char			*fbuf;
	struct s_buffer	*next;
}					t_buffer;

int			get_next_line(int const fd, char **line);
t_buffer	*lstadd(t_buffer **list, int const fd);
t_buffer	*lstinit(t_buffer **list, int const fd);

#endif /* !GET_NEXT_LINE_H */
