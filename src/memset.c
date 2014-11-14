/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:19:07 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 17:25:36 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*temp;

	temp = (char*) b;
	i = 0;
	while (i != len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char*) s;
	i = 0;
	while (i != n)
	{
		temp[i] = '\0';
		i++;
	}
}
