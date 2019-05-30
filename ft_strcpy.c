/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:48:24 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/24 13:00:46 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strcpy(char *dest, char *src)
{
	int i;
	char *p;

	i = 0;
	p = dest;
	if (dest == NULL)
		return (NULL);
	else
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	return (p);
}
