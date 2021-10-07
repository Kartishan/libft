/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:40:23 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/06 11:40:25 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p;
	char	*q;

	p = (char *)s1;
	q = (char *)s2;
	while (n > 0)
	{
		if (*p != *q)
		{
			return (*p = *q);
		}
		p++;
		q++;
		n--;
	}
	return (*p - *q);
}
/*int main()
{
	char a[10] = "  ";
    char b[10] = "";
    printf("%d\n",ft_memcmp(a,b,20));
	printf("%d\n",memcmp(a,b,20));
	printf("%d\n", memcmp(a,b, 20));
}
*/
