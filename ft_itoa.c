/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:09:23 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/19 12:18:37 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countnb(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char	*convert(char *str, int n, int l)
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
	int		i;
	int		l;
	
	l = countnb(n);
	i = 0;
	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * (l + 1));
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n > 0)
	{
		str = convert(str, n, l);
	}
	return (str);
}
int main()
{
	printf("%s", ft_itoa(-975648));
}