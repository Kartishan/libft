/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:27 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/05 16:47:28 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
/*int main()
{
	char a[10] = "   ";
    char b[10] = "";
    printf("%d\n",ft_strncmp(a,b,3));
	printf("%d\n",strncmp(a,b,3));
	printf("%d\n", memcmp(a,b, 1));
}*/
