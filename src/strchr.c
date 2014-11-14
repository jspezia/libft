/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:33:13 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 17:28:15 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str = (char*) s + i;
			return (str);
		}
		i++;
	}
	if (c == '\0')
	{
		str = (char*) s + i;
		return (str);
	}
	return (NULL);
}

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	int		end;
	char	*str;

	i = 0;
	while (s[i] != '\0')
		i++;
	end = i;
	while (i != -1)
	{
		if (s[i] == c)
		{
			str = (char*) s + i;
			return (str);
		}
		i--;
	}
	if (c == '\0')
	{
		str = (char*) s + end;
		return (str);
	}
	return (NULL);
}
