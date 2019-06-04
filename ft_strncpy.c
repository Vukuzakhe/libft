/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:27:52 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 13:01:02 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	int		i;
	char	*p;

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
