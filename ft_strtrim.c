/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 20:03:02 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 20:04:00 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *str)
{
	size_t	start;
	size_t	end;

	if (!str)
		return (NULL);
	start = 0;
	end = ft_strlen(str);
	if (!end)
		return (ft_strnew(0));
	while (ft_isspace(str[start]))
		++start;
	while (ft_isspace(str[end - 1]) && end > start)
		--end;
	if (!(end - start))
		return (ft_strnew(0));
	return (ft_strsub(str, start, end - start));
}
