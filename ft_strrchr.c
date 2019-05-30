/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:16:40 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/27 12:25:34 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c)
{
	char *last;

	last = NULL;
	if (c == '\0')
		return (ft_strchr(s, c));
	while ((s = ft_strchr(s, c)) != NULL)
	{
		last = s;
		s++;
	}
	return (last);
}
/*
int main(void)
{
	char a[] = "something, kinda feels awesome";

	printf("%s", ft_strrchr(a, ','));
	return (0);
}*/
