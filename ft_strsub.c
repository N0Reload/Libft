/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:02:01 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 20:02:02 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*result;

	if (!str)
		return (NULL);
	result = ft_strnew(len);
	if (!result)
		return (NULL);
	str += start;
	return (ft_strncpy(result, str, len));
}
