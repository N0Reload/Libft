/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:54:09 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 21:48:08 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		o;

	len = (n < 0 ? 1 : 0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	o = (n < 0 ? -n : n);
	while ((o = o / 10) > 0)
		++len;
	o = (n < 0 ? -n : n);
	str = ft_strnew(len + 1);
	if (!str)
		return (NULL);
	while (len-- >= 0)
	{
		str[len + 1] = (o % 10) + '0';
		o = o / 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
