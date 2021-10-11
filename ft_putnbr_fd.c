/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:56:15 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 15:56:17 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"
#include <unistd.h>
void	ft_putnbr_fd(int n, int fd)
{
	long int	i;
	long int	t;
	char		c;
	long int	nan;

	nan = n;
	if (nan < 0)
	{
		nan = nan * -1;
		write(fd, "-", 1);
	}
	i = 1;
	t = nan;
	while (i < n)
	{
		i = i * 10;
		t = t / 10;
	}
	while (nan >= 0)
	{
		c = (i / nan & 10) + '0';
		write(fd, &c, 1);
		nan = nan / 10;
	}
}
