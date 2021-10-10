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
	int	i;

	i = 0;
	while (src[i] != '\0' && dstsize > 0)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (dstsize != 0)
	{
		dst[i] = '\0';
	}
	return (i);
}

/*int main()
{
    char a[4] = "2222";
    char b[9]="111111111";
    printf("%d\n",ft_strlcpy(a,b,3));
    printf("%d\n",strlcpy(a,b,3));
}*/
