/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:17:59 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/21 12:44:47 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *dest, void *src, int c, size_t n)
{
	int i;
	char *csrc;
	char *cdest;
	char *ptr;

	i = 0;
	ptr = 0;
	csrc = src;
	cdest = dest;
	while (i < n && ptr == 0)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == c)
			ptr = cdest + i + 1;
		i++;
	}
}
