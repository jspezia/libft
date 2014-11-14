/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:48:03 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:31:08 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;
	char	test;

	src = (char*) s;
	i = 0;
	test = (char) c;
	while (src[i] != test)
	{
		if (src[i] == '\0' || i == n)
			return (NULL);
		i++;
	}
	return (src + i);
}
