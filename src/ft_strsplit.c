/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:04:48 by erobert           #+#    #+#             */
/*   Updated: 2014/04/15 16:33:09 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_take_word(size_t start, char *str, char c)
{
	char	*word;
	size_t	i;
	size_t	k;

	k = start;
	while (str[k] && str[k] != c)
		k++;
	word = (char *)malloc(sizeof(*word) * (k - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i + start < k)
	{
		word[i] = str[i + start];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	ft_nbwords(char *str, char c)
{
	char	*word;
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			word = ft_take_word(i, str, c);
			k++;
			i = i + ft_strlen(word);
			free(word);
		}
	}
	return (k);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab = (char**)malloc(sizeof(*tab) * (ft_nbwords((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			tab[k] = ft_take_word(i, (char *)s, c);
			i += ft_strlen(tab[k]);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
