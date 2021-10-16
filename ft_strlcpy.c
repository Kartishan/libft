/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:27:18 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 17:27:19 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <stdlib.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && dstsize > 1)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	char a[5] = "222222";
	char b[6] = "111";
	printf("eto ih %d\n",strlcpy(a,b,1));
	char g[5] = "222222";
	char k[5] = "111";
	printf("eto nashe %d\n",ft_strlcpy(g,k,1));
}*/
