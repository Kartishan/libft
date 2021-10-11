/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:46:11 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 15:46:12 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <unistd.h>
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
