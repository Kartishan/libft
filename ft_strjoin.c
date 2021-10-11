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
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
			i++;
		p = (char *)malloc(i + 1);
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
	return (NULL);
}

/*int main()
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
}*/