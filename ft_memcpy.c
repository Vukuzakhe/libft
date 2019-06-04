/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:26:26 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 12:16:20 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, void *src, unsigned int n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = src;
	cdest = dest;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
}
