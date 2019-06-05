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
	while (str[i])
	{
		if (str[i] == '\t' ||  str[i] == '\b' || str[i] == '\n' || str[i] == '\0')
			return (0);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}
