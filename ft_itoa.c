/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pallspic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:07:14 by pallspic          #+#    #+#             */
/*   Updated: 2019/07/06 15:03:50 by pallspic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intsize(int n)
{
	int i;

	i = 0;
	while (n /= 10)
		i++;
	return (++i);
}

static int		ft_getdig(int n, int size)
{
	while (size--)
		n /= 10;
	return (n % 10);
}

char			*ft_itoa(int n)
{
	char	*new;
	size_t	i;
	int		size;
	int		neg;

	i = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	size = ft_intsize(n);
	if (!(new = ft_strnew(size + neg)))
		return (NULL);
	if (neg)
		new[i++] = '-';
	while (size--)
		new[i++] = ft_abs(ft_getdig(n, size)) + '0';
	new[i] = '\0';
	return (new);
}
