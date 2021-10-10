/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:39:50 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 17:26:17 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"

int	ft_atoi(const char *str)
{
	long int		c;
	long int		i;
	long int		n;

	c = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c *= 10;
		c += (str[i] - '0');
		i++;
	}
	if (n == 1)
		c = c * -1;
	return (c);
}

/**int main()
{
	char a[10] ="+548";
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
}*/
