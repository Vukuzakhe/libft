/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:27:26 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 15:31:54 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
<<<<<<< HEAD
	while (str[i])
	{
		if (str[i] == '\t' ||  str[i] == '\b' || str[i] == '\n' || str[i] == '\0')
			return (0);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
=======
	while (*str >= 9 && *str <= 13)
		str++;
	if (*str == '-')
		i = -1;
	else
		i = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		result = (result * 10) + (*str++ - '0');
	return (result * i);
>>>>>>> 496ba6694bd5de0d9f48f54e24d629bf8c125f9f
}
