/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:54:32 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/06 13:55:14 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j] && len > j && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i - j]);
		i++;
	}
	return (0);
}

/*int	main()
{
	char a[30]= "abobaboba";
	char b[40]= "boba";
	printf("%s\n", ft_strnstr(a,b,4));
}*/
