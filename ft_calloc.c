/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:29:14 by skorbai           #+#    #+#             */
/*   Updated: 2023/10/31 15:38:24 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;
	char	*buffer;

	i = 0;
	ptr = malloc(size * count);
	buffer = (char *) ptr;
	while (count != 0)
	{
		buffer[i] = 0;
		i++;
		count--;
	}
	return (ptr);
}
