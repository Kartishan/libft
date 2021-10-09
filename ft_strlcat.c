/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:07 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 17:27:32 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	int	s;
	int	c;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	s = i;
	c = i;
	if (i > dstsize)
		s = dstsize;
	while (src[j] != '\0')
		j++;
	s += j;
	j = 0;
	while (dstsize - 1 > i && src[j] != '\0')
	{
		dst[i++] = src[j++];
	}
	if (dstsize != 0 && c <= dstsize)
		dst[i] = '\0';
	return (s);
}

/*int main()
{
    char a[10] = "222222";
    char b[10]="111111111";
    printf("%d\n",ft_strlcat(a,b,10));
	printf("%s\n",a);
	char a2[10] = "222222";
	char b2[10] ="111111111";
    printf("%d\n",strlcat(a2,b2,10));
	printf("%s\n",a2);
}*/
