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
#include <stdlib.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;

	while (s1[i] != '\0')
		i++;
	p = malloc(i);
	if (p == NULL)
		return ((void *)0);
	i = 0;
	j = 0;
	while (s1[j] == set[0])
		j++;
	i--;
	while (s1[i] == set[0])
		i--;
	while (j <= i)
	{
		p[j] == s1[j];
		j++;
	}
	p[j] == '\0';
	return (p);
}
/*int main()
{
	char a[60] = "1123sas1211";
	char b = '1';
	printf("%s\n", ft_strtrim(a,b));
}*/
