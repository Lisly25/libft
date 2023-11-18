/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:18:06 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/08 17:29:05 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*ptr_to_new_list;

	ptr_to_new_list = new_list;
	while (lst != NULL)
	{
		new_list = ft_lstnew(f(lst->content));
		if (new_list->content == NULL)
			ft_lstdelone(new_list, del);
		

	}
}
