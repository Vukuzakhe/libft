/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:27:26 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/30 17:38:28 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int main () 
{
	char str[100] = "89789";
    int val = ft_atoi(str);
	printf("%d", val);
	return (0);
}
