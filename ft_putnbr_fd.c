/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:56:24 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/24 11:03:14 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
			i = n * -1;
	}
	else
		i = n;
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd(i % 10 + '0', fd);
}
int main()
{
	ft_putnbr_fd(123453436, 1);
}