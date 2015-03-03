/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruno <abruno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 15:38:18 by abruno            #+#    #+#             */
/*   Updated: 2015/03/03 15:48:21 by jspezia          ###   ########.fr       */
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
		if (!(tabcpy[j] = (char *)malloc(sizeof(char)
						* (ft_strlen(tab[j]) + 1))))
			return (NULL);
		ft_strcpy(tabcpy[j], tab[j]);
		j++;
	}
	tabcpy[j] = NULL;
	return (tabcpy);
}
