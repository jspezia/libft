/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:45:52 by jspezia           #+#    #+#             */
/*   Updated: 2014/04/15 17:23:10 by jspezia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stockint(int n, char *nb, int i, int k)
{
	int		j;

	j = 0;
	if (n < 0)
	{
		nb[j++] = '-';
		n = -n;
	}
	k -= j;
	while (k-- > 0)
	{
		nb[j++] = n / i + '0';
		n = n % i;
		i = i / 10;
	}
	return (nb);
}

char		*ft_itoa(int n)
{
	char	*nb;
	int		i;
	int		k;

	i = 1;
	k = 1;
	if (n < -2147483647)
		return ("-2147483648");
	if (n < 0)
		k++;
	while ((n / i) > 9 || (n / i) < -9)
	{
		i *= 10;
		k++;
	}
	nb = ft_strnew(k + 1);
	if (n == 0)
		nb[0] = '0';
	return (ft_stockint(n, nb, i, k));
}
