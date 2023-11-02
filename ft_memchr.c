/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:32:57 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/01 15:00:25 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*buffer;
	size_t	i;
	void	*result;

	buffer = (char *) s;
	i = 0;
	while (i < n && *buffer != '\0')
	{
		if (*buffer == c)
		{
			result = buffer;
			return (result);
		}
		buffer++;
		i++;
	}
	result = NULL;
	return (result);
}
