/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:48:24 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/08 16:44:30 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*p;

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
	dest[i] = '\0';
	return (p);
}
