/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:05:59 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 13:06:04 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_putnbr(int n, char *p, int negative)
{
	long int	k;
	long int	power;
	int			i;

	i = 0;
	if (negative == 1)
	{
		p[i] = '-';
		i++;
	}
	power = n;
	k = 1;
	while (power > 10)
	{
		k = k * 10;
		power = power / 10;
	}
	while (k > 0)
	{
		p[i] = (n / k % 10) + '0';
		k = k / 10;
		i++;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*p;
	int			negative;

	if (n < 0)
	{
		n = n * -1;
		negative = 1;
	}
	while (i < n)
		i++;
	p = malloc(sizeof(int) * 1 + 1);
	if (p == NULL)
		return ((void *)0);
	p = ft_putnbr(n, *p, negative);
	return (p);
}

/*int main()
{
	printf("%s\n", ft_itoa(-123));
}*/
