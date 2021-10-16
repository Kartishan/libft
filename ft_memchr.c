/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:56:15 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/05 17:56:16 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <stdlib.h>
char	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		if (*p == c)
			return (p);
		p++;
		n--;
	}
	return (0);
}