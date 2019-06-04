/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:55:09 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 12:29:00 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	size_t	size;
	char	*copy;

	size = 0;
	copy = malloc(size);
	size = ft_strlen(str) + 1;
	if (copy == NULL)
		return (NULL);
	else
		ft_memcpy(copy, str, size);
	return (copy);
}
