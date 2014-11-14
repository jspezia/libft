/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:19:47 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:41:01 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*str2;

	i = 0;
	len = ft_strlen(s1);
	str2 = malloc(sizeof(*s1) * (len + 1));
	while (i <= len)
	{
		str2[i] = s1[i];
		i++;
	}
	return (str2);
}
