/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:27:04 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 17:27:07 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = b;
	while (len > 0)
	{
		*p++ = c;
		len--;
	}
	return (b);
}
/*int main()
{
	char b[5];
	b[3]='a';
	b[4]='\0';
	printf("%s",ft_memset(b,'c',3));
}*/
