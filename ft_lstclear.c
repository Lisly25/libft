/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:05:19 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/08 16:28:08 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;
	t_list	*copy_of_lst;

	copy_of_lst = *lst;
	next_node = copy_of_lst->next;
	while (copy_of_lst != NULL)
	{
		next_node = copy_of_lst->next;
		del(copy_of_lst->content);
		free(copy_of_lst);
		copy_of_lst = next_node;
	}
	lst = NULL;
}
