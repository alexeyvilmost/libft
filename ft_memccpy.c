/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pallspic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:35:27 by pallspic          #+#    #+#             */
/*   Updated: 2019/07/06 15:03:50 by pallspic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	unsigned char	*to_put;
	unsigned char	*to_copy;

	to_put = (unsigned char *)dest;
	to_copy = (unsigned char *)src;
	while (size--)
	{
		*to_put++ = *to_copy++;
		if (*(to_put - 1) == (unsigned char)c)
			return (to_put);
	}
	return (NULL);
}
