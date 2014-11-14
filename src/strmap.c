/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 19:04:34 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:44:29 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*cpy;

	len = ft_strlen(s);
	i = 0;
	cpy = ft_strnew(len);
	while (i != len)
	{
		cpy[i] = f(s[i]);
		i++;
	}
	return (cpy);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	size_t			i;
	char			*cpy;
	unsigned int	k;

	k = 0;
	len = ft_strlen(s);
	i = 0;
	cpy = ft_strnew(len);
	while (i != len)
	{
		cpy[i] = f(k, s[i]);
		i++;
		k++;
	}
	return (cpy);
}
