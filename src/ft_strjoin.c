/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:07:19 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:24:55 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len_s1;
	size_t	len;

	len_s1 = ft_strlen(s1);
	len = len_s1 + ft_strlen(s2);
	str = ft_strnew(len);
	i = 0;
	if (str == NULL)
		return (str);
	while (i != len_s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i != len)
	{
		str[i] = s2[i - len_s1];
		i++;
	}
	return (str);
}
