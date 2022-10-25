/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:09:49 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/21 13:39:40 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	ss = (unsigned char *) s;
	i = 0;
	while (i != n)
	{
		if (ss[i] == c && i < n)
			return (ss + i);
		i++;
	}
	return (NULL);
}
