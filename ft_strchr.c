/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:48:01 by skorbai           #+#    #+#             */
/*   Updated: 2023/10/26 14:54:43 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = (char *)s;
	while (*result != '\0')
	{
		if (*result == c)
			return (result);
		result++;
	}
	if (*result == c == '\0')
	{
		return (result);
	}
	result = NULL;
	return (result);
}
