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

	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	i = 1;
	t = n;
	while (i < n)
	{
		i = i * 10;
		t = t / 10;
	}
	while (n != 0)
	{
		c = (i / n & 10) + '0';
		write(fd, &c, 1);
		n = n / 10;
	}
}
