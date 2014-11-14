/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:47:44 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 17:25:15 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*temp;
	char	*temp2;
	size_t	i;

	i = 0;
	temp = (char*) s1;
	temp2 = (char*) s2;
	while (i != n)
	{
		temp[i] = temp2[i];
		i++;
	}
	return (s1);
}

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = (char*) s1;
	src = (char*) s2;
	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		if (src[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
