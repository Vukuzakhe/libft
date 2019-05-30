/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:22:43 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/28 11:26:09 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *sr1;
	const unsigned char *sr2;
	int i;

	sr1 = s1;
	sr2 = s2;
	i = 0;
	while (0 < n)
	{
		if ((i = *sr1 - *sr2) != 0)
			break;
		++sr1;
		++sr2;
		n--;
	}
	return (i);
}

/*int main ()
{
  char buffer1[] = "d";
  char buffer2[] = "d";

  int n;

  n = ft_memcmp( buffer1, buffer2, sizeof(buffer1));

  if (n > 0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
  else if (n < 0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

  return 0;
}*/
