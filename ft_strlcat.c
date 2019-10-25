/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:16:21 by lmunoz-q          #+#    #+#             */
/*   Updated: 2018/05/07 23:25:11 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char const *str, size_t size)
{
	size_t len;

	len = 0;
	while (len < size && *str)
	{
		++len;
		++str;
	}
	return (len);
}

size_t			ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	slen;
	size_t	dlen;

	slen = (size_t)ft_strlen(src);
	dlen = (size_t)ft_strnlen(dest, n);
	if (dlen == n)
		return (n + slen);
	if (slen < n - dlen)
		ft_strncpy(dest + dlen, src, slen + 1);
	else
	{
		ft_strncpy(dest + dlen, src, n - dlen - 1);
		dest[n - 1] = '\0';
	}
	return (dlen + slen);
}
