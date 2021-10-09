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

char	*ft_strrchr(const char *s, int c)
{
	while (*s != (char)c && *s)
	{
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return ((void *)0);
}