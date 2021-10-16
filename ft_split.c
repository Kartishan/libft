/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:42:51 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 12:42:52 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <stdlib.h>
int	ft_countj(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	return (j);
}

char	**ft_memoryk(char **p, char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	u;

	i = 0;
	j = 0;
	u = ft_countj(s, c);
	while (j < u && s[i] != '\0')
	{
		k = 0;
		while (s[i++] != c && s[i] != '\0')
			k++;
		while (s[i] == c && s[i] != '\0')
			i++;
		p[j] = malloc(sizeof(char *) * (k + 1));
		if (p[j] == NULL)
		{
			while (p[--j] != 0)
				free (p[j]);
			return ((void *) 0);
		}
		j++;
	}
	return (p);
}

char	**ft_zapis(char **p, char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	u;

	i = 0;
	j = 0;
	u = ft_countj(s, c);
	while (j < u && s[i] != '\0')
	{
		k = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			p[j][k] = s[i];
			i++;
			k++;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
		p[j][k] = '\0';
		j++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char			**p;
	int				j;

	if (!s)
		return ((void *)0);
	j = ft_countj(s, c);
	if (j == 0)
		p = malloc(sizeof(char *) * (1));
	else
		p = malloc(sizeof(char *) * (j + 1));
	if (p == NULL)
		return ((void *)0);
	p = ft_memoryk(p, s, c);
	p = ft_zapis(p, s, c);
	p[j] = NULL;
	return (p);
}
