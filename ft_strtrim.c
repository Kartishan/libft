/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:58:53 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/07 19:58:54 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
#include <stdlib.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;
	int		k;

	i = 0;
	while (s1[i] != '\0')
		i++;
	p = malloc(i + 1);
	if (p == NULL)
		return ((void *)0);
	j = 0;
	while (s1[j] == *set)
		j++;
	i--;
	while (s1[i] == *set)
		i--;
	k = 0;
	while (j <= i)
	{
		p[k] = s1[j];
		j++;
		k++;
	}
	return (p);
}
/*int main()
{
	char a[7] = "112211";
	char b[3] = "1";
	printf("%s\n", ft_strtrim(a,b));
}*/