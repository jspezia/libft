/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:17:29 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 16:19:39 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*sr1;
	char		*sr2;
	size_t		i;

	i = 0;
	sr1 = (char*) s1;
	sr2 = (char*) s2;
	if (sr1[i] == '\0' && sr2[i] == '\0')
		return (sr1[i] - sr2[i]);
	while (n != 0)
	{
		if (sr1[i] == '\0' || sr2[i] == '\0')
			return (sr1[i] - sr2[i]);
		if (sr1[i] != sr2[i])
			return (sr1[i] - sr2[i]);
		i++;
		n--;
	}
	i--;
	return (sr1[i] - sr2[i]);
}
