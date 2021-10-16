/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:27:52 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/07 19:27:53 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <stdlib.h>
int	ft_len(char const *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_len(s1, s2);
	p = malloc(i + 1);
	if (p == NULL)
		return ((void *)0);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main()
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
}*/