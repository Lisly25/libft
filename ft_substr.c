/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:43:25 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/05 09:35:00 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		substr_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	substr_len = len;
	if (start > ft_strlen(s))
		substr_len = 0;
	if ((ft_strlen(s) - start) < len)
		substr_len = (ft_strlen(s) - start);
	substr = malloc(substr_len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[start] != '\0' && len != 0 && start < ft_strlen(s))
	{
		substr[i++] = s[start++];
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
