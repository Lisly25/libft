/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:29:14 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/06 09:48:45 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	int				i;
	char			*buffer;
	size_t			malloc_size;

	i = 0;
	malloc_size = size * count;
	if (count != 0 && (malloc_size / count != size))
		return (NULL);
	ptr = malloc(malloc_size);
	printf("We have malloced %zu size\n", malloc_size);
	if (ptr == NULL)
		return (NULL);
	buffer = (char *) ptr;
	while (malloc_size != 0)
	{
		buffer[i] = 0;
		i++;
		malloc_size--;
	}
	return (ptr);
}
