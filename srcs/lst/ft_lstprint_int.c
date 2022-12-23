/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2022/12/23 13:20:34 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint_int(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
	{
		puts("Empty list");
		return ;
	}
	tmp = lst;
	while(tmp)
	{
		printf("|%d| >> ", (int)tmp->content);
		tmp = tmp->next;
	}
}
