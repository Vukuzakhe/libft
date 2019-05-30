/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:27:52 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/23 13:56:06 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, size_t n)
{
	int i;
	char *p;

	i = 0;
	p = dest;
	if (dest == NULL)
	   	return (NULL);
	else
		while (src[i] && n--)
		{
			dest[i] = src[i];
			i++;
		}
	return (p);
}
