/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:51:00 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 14:51:03 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <stdlib.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	p = malloc(i + 1);
	if (p == NULL)
		return ((void *)0);
	i = 0;
	while (p[i] != '\0')
	{
		p[i] = (*f)(i, p[i]);
		i++;
	}
	return (p);
}
