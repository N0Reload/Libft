/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:13:22 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 19:13:23 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strcspn(const char *s1, const char *reject)
{
	size_t value;

	value = 0;
	while (*s1)
	{
		if (ft_strchr(reject, *s1))
			return (value);
		else
		{
			s1++;
			value++;
		}
	}
	return (value);
}
