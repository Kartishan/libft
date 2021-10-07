/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:28:27 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/07 18:28:28 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*q;
	char	*p;

	i = 0;
	q = s;
	while (q[i] != '\0')
		i++;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return ((void *)0);
	i = 0;
	while (p[i] != start)
		i++;
	if (s[i] == start)
	{
		while (p[i] != '\0')
		{
			q[j] == p[i];
			i++;
		}
	}
	return (q);
}
