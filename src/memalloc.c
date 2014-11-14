/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memalloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 17:34:08 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:31:06 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(size);
	while (i != size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

void		ft_memdel(void **app)
{
	free(*app);
	*app = NULL;
}

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	long	ptr;
	size_t	i;
	char	*dest;
	char	*src;

	dest = (char*) s1;
	src = (char*) s2;
	ptr = src - dest;
	i = 0;
	if (ptr == 0)
		return (s1);
	while (i != n)
	{
		if (ptr > 0)
		{
			dest[i] = src[i];
			i++;
		}
		if (ptr < 0)
		{
			dest[n - 1] = src[n - 1];
			n--;
		}
	}
	return (s1);
}
