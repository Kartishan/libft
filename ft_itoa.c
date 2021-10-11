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
#include  "libft.h"
#include <stdlib.h>
char	*ft_putnbr(long int n, char *p, int negative)
{
	long int	k;
	long int	power;
	long int	i;

	i = 0;
	if (negative == 1)
	{
		p[i] = '-';
		i++;
	}
	power = n;
	k = 1;
	while (power > 9)
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
	p[i] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	long int			i;
	char				*p;
	long int			nan;
	long int			negative;

	i = 0;
	nan = n;
	if (n < 0)
	{
		nan = nan * -1;
		negative = 1;
	}
	p = malloc(sizeof(nan));
	if (p == NULL)
		return ((void *)0);
	p = ft_putnbr(nan, p, negative);
	return (p);
}

/*int main()
{
	printf("%s\n", ft_itoa(156));
	char s1[3] = "156";
	if (s1 == ft_itoa(156));
	{
		printf("Тест 1, все не ок %s\n");
	}
	//char *i1 = ft_itoa(-623);
	//char *i2 = ft_itoa(156);
	//char *i3 = ft_itoa(-0);

	if (strcmp(i1, "-623"))
	{
		printf("Тест 1, все не ок%s\n");
	}
	if (strcmp(i2, "156"))
	{
		printf("Тест 2, все не ок%s\n");
	}
	if (strcmp("0", i3))
	{
		printf("Тест 3, все не ок%s\n");
	}
	
}*/
