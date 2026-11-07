/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:21:28 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/06 15:51:28 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int nb, char *str, int j)
{
	int long	n;

	n = nb;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if ((n / 10) != 0)
		ft_putnbr(n / 10, str, j - 1);
	str[j] = ((n % 10) + '0');
}

char	*ft_itoa(int n)
{
	int		m;
	int		nb;
	char	*str;

	nb = n;
	m = 0;
	if (n < 0)
	{
		nb *= -1;
		m++;
	}
	while ((nb / 10) != 0)
	{
		nb = nb / 10;
		m++;
	}
	str = malloc(sizeof(*str) * (m + 1));
	if (!str)
		return (NULL);
	ft_putnbr(n, str, m);
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(0));
// 	return (0);
// }
