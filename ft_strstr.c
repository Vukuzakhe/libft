/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:31:30 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 13:09:33 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *str1)
{
	char	*strt;
	char	*ocrn;

	while (*str)
	{
		strt = str;
		ocrn = str1;
		while (*str && *ocrn && *str == *ocrn)
		{
			str++;
			ocrn++;
		}
		if (!*ocrn)
			return (strt);
		str = strt + 1;
	}
	return (NULL);
}
