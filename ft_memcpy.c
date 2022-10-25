/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:28:41 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/24 11:11:49 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	if (n == 0)
		return (s);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
