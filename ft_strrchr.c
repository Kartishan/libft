/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:14:20 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/05 16:14:23 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i--;
	}
	return ((void *)0);
}
/*int main()
{
	char a[10] = "aacaaaa";
	printf("%s\n", ft_strrchr(a,'a'));
	printf("%s\n", strrchr(a,'a'));
}*/