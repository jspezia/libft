/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 10:13:58 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:33:26 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		**ft_tabcpy(char **tab)
{
	int		i;
	int		j;
	char	**tabcpy;

	i = 0;
	while (tab[i] != NULL)
		i++;
	if (!(tabcpy = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	j = 0;
	while (j < i)
	{
		if (!(tabcpy[j] =
					(char *)malloc(sizeof(char) * (ft_strlen(tab[j]) + 1))))
			return (NULL);
		ft_strcpy(tabcpy[j], tab[j]);
		j++;
	}
	tabcpy[j] = NULL;
	return (tabcpy);
}
