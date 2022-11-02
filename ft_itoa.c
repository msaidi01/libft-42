/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:09:23 by msaidi            #+#    #+#             */
/*   Updated: 2022/11/01 23:42:44 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnb(long n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*convert(char *str, long n, int l)
{
	str[l] = '\0';
	while (n)
	{
		str[l - 1] = n % 10 + '0';
		n /= 10;
		l--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;

	nb = n;
	if (nb == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (countnb(nb) + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		str = convert(str, nb, countnb(nb) + 1);
	}
	else if (nb > 0)
		str = convert(str, nb, countnb(nb));
	return (str);
}
