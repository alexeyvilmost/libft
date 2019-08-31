/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pallspic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:39:37 by pallspic          #+#    #+#             */
/*   Updated: 2019/07/06 15:03:50 by pallspic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_abs(int n)
{
	if (n < 0 && n != -2147483648)
		return (n * -1);
	if (n >= 0)
		return (n);
	return (0);
}