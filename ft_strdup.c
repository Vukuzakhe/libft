/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:55:09 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/22 16:25:26 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strdup(char *str)
{
	size_t size;
	char *copy;

	copy = malloc(size);
	size = ft_strlen(str) + 1;
	if (copy == NULL)
		return (NULL);
	else
		ft_memcpy(copy, str, size);
	return (copy);
}
