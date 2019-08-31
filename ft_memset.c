/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pallspic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:00:12 by pallspic          #+#    #+#             */
/*   Updated: 2019/07/06 15:03:50 by pallspic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *point, int val, size_t size)
{
	unsigned char	*buff;
	size_t			i;

	if (!size)
		return (point);
	i = 0;
	buff = (unsigned char *)point;
	while (size--)
		buff[i++] = (unsigned char)val;
	return (point);
}
