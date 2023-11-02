/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:20:23 by skorbai           #+#    #+#             */
/*   Updated: 2023/10/31 11:47:29 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;
	size_t	dstsize_original;

	i = 0;
	dstsize_original = dstsize;
	dst_len = ft_strlen(dst);
	j = dst_len ;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (((dstsize - dst_len) - 1) > 0)
	{
		dst[j++] = src[i++];
		dstsize--;
	}
	if (dstsize_original != 0)
		dst[j] = '\0';
	return (dst_len + src_len);
}
