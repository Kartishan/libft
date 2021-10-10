/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:36:28 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 16:36:30 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <stdlib.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *) dst;
	q = (unsigned char *) src;
	if (!dst && !src)
		return (dst);
	if (p > q)
	{
		while (len-- > 0)
		{
			p[len] = q[len];
		}
		return (dst);
	}
	else
	{
		while (len > 0)
		{
			*p++ = *q++;
			len--;
		}
	}
	return (dst);
}
/*int main()
{
	char a[10] = "22222222";
    char b[10] = "444";
	printf("%s\n",ft_memmove(a,b,10));
	printf("%s\n",memmove(a,b,10));
}*/