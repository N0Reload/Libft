/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:01:25 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 19:01:26 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **begin_list, t_list *new_elem)
{
	if (*begin_list == NULL)
	{
		(*begin_list) = new_elem;
		return ;
	}
	while ((*begin_list)->next)
		*begin_list = (*begin_list)->next;
	(*begin_list)->next = new_elem;
}
