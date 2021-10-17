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

int	ft_isspace(int i, char const *str)
{
	if (i == 0)
	{
		while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	}
	else
	{
		while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i--;
	}
	return (i);
}

int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	k;

	i = 0;
	i = ft_isspace(i, s1);
	while (s1[i])
	{
		k = 0;
		while (s1[i] != set[k] && set[k] != '\0')
			k++;
		if (s1[i] == set[k])
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_end(char const *s1, char const *set)
{
	int	j;
	int	k;

	j = ft_strlen(s1);
	j = ft_isspace(j, s1);
	j--;
	while (s1[j])
	{
		k = 0;
		while (s1[j] != set[k] && set[k] != '\0')
			k++;
		if (s1[j] == set[k])
			j--;
		else
			break ;
	}
	return (j);
}

char	*ft_vivod(char *p, int i, int j, const char *s1)
{
	int	k;

	k = 0;
	while (i <= j)
	{
		p[k] = s1[i];
		i++;
		k++;
	}
	p[k] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = ft_start(s1, set);
	j = ft_end(s1, set);
	if (j - i < 0)
		j = i;
	p = malloc((j - i) + 2);
	if (p == NULL)
		return (NULL);
	p = ft_vivod(p, i, j, s1);
	return (p);
}
