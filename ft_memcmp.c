/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:22:43 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/04 12:21:50 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sr1;
	const unsigned char	*sr2;
	int					i;

	sr1 = s1;
	sr2 = s2;
	i = 0;
	while (0 < n)
	{
		if ((i = *sr1 - *sr2) != 0)
			break ;
		++sr1;
		++sr2;
		n--;
	}
	return (i);
}
