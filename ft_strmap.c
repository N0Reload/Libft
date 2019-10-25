/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:26:41 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 19:27:30 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*cpy;
	int		pos;

	if (!str || !f)
		return (NULL);
	cpy = ft_strnew(ft_strlen(str));
	if (!cpy)
		return (NULL);
	pos = -1;
	while (str[++pos])
	{
		cpy[pos] = f(str[pos]);
	}
	cpy[pos] = '\0';
	return (cpy);
}
