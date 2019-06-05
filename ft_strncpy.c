/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:27:52 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/05 14:43:41 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	char	*cdest;

	cdest = dest;
	while (n)
	{
		if ((*cdest = *src) != 0)
			src++;
		cdest++;
		n--;
	}
	return (dest);
}
