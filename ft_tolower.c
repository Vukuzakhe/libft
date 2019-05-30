/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:17:33 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/30 15:30:18 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	else
		return (c);
}

int main(void)
{
	char c = 'B';

	int d = ft_tolower(c);
	printf("%c", d);
	return (0);
}
