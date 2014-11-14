/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:37:05 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 17:28:30 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strcmp2(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	return (1);
}

char		*ft_strstr(const char *s1, const char *s2)
{
	int			i;
	int			bol;
	const char	*str;
	char		*result;

	i = 0;
	while (s1[i] != '\0')
	{
		str = s1 + i;
		bol = ft_strcmp2(str, s2);
		if (bol == 0)
		{
			result = (char*) str;
			return (result);
		}
		i++;
	}
	return (NULL);
}

static int	ft_strcmp3(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while (s1[i] != '\0' && n != 0)
	{
		if (s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
			return (1);
		i++;
		n--;
	}
	if (s2[i] == '\0')
		return (0);
	return (1);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int			i;
	int			bol;
	const char	*str;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return ((char *) s1);
	while (s1[i] != '\0')
	{
		str = s1 + i;
		bol = ft_strcmp3(str, s2, n);
		if (bol == 0)
			return ((char *) str);
		i++;
		n--;
	}
	return (NULL);
}
