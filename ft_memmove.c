/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:08:20 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/06 16:47:09 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	do_strs_overlap(char *dst, char *src)
{
	if (dst + ft_strlen(dst) == src + ft_strlen(src))
		return (1);
	return (0);
}

static	void	*overlap_memmove(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(src) < ft_strlen(dst))
	{
		while (len != 0)
		{
			dst[i] = src[i];
			len--;
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (len != 0)
		{
			dst[i] = src[i];
			len--;
			i--;
		}
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*buffer_d;
	char	*buffer_s;

	buffer_s = (char *) src;
	buffer_d = (char *) dst;
	if (do_strs_overlap(buffer_d, buffer_s) == 1)
		overlap_memmove(buffer_d, buffer_s, len);
	else
	{
		i = len - 1;
		while (len != 0)
		{
			buffer_d[i] = buffer_s[i];
			len--;
			i--;
		}
	}
	return (dst);
}
