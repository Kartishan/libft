/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:51:57 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/05 15:56:02 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
	{
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return ((void *)0);
}
/*int main()
{
	char a[10] = "aacaaaa";
	printf("%s\n", ft_strchr(a,'r'));
	printf("%s\n", strchr(a,'r'));
	}*/