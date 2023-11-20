/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:08:20 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/20 17:13:21 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	unsign_len(unsigned char *s)
{
	size_t			i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	do_strs_overlap(unsigned char *dst, unsigned char *src)
{
	if (dst + unsign_len(dst) == src + unsign_len(src))
		return (1);
	return (0);
}

static void	*overlap_memmove(unsigned char *dst, unsigned char *src, size_t len)
{
	if (unsign_len(src) < unsign_len(dst))
	{
		while (len != 0)
		{
			*dst = *src;
			len--;
			dst++;
			src++;
		}
	}
	else
	{
		dst = dst + (len - 1);
		src = src + (len - 1);
		while (len != 0)
		{
			*dst = *src;
			len--;
			dst--;
			src--;
		}
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buffer_d;
	unsigned char	*buffer_s;

	buffer_s = (unsigned char *) src;
	buffer_d = (unsigned char *) dst;
	if ((src == NULL && dst == NULL) || len == 0)
		return (dst);
	if (do_strs_overlap(buffer_d, buffer_s) == 1)
		overlap_memmove(buffer_d, buffer_s, len);
	else
	{
		buffer_d = buffer_d + (len - 1);
		buffer_s = buffer_s + (len - 1);
		while (len != 0)
		{
			*buffer_d = *buffer_s;
			len--;
			buffer_d--;
			buffer_s--;
		}
	}
	return (dst);
}
