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

#include <stdlib.h>
char	**ft_split(char const *s, char c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
		i++;
	p = malloc(i + 1);
	if (p == NULL)
		return ((void *)0);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		if (s[i] == ' ')
			p[i] = c;
		i++;
	}
	free(p);
	return (p);
}
/*int main()
{
	char a[]= "aba baba kak";
	printf("%s\n", ft_split(a,','));
}*/