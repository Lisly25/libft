/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:05:19 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/20 11:12:06 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;
	t_list	*copy_of_lst;

	copy_of_lst = *lst;
	next_node = copy_of_lst->next;
	if (next_node != NULL && copy_of_lst->next == NULL)
	{
		ft_lstdelone(copy_of_lst, del);
		return ;
	}
	while (next_node != NULL)
	{
		next_node = copy_of_lst->next;
		if (next_node != NULL)
			ft_lstclear(&next_node, del);
	}
	lst = NULL;
}
