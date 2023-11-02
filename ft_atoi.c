/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:10:02 by skorbai           #+#    #+#             */
/*   Updated: 2023/11/01 17:00:58 by skorbai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	char	*buffer;
	int		i;
	int		is_neg;

	i = 0;
	result = 0;
	buffer = (char *) str;
	is_neg = 0;
	while (str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i != '\0'])
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (is_neg == 1)
		result = 0 - result;
	return (result);
}
