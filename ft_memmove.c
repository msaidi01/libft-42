/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:12:00 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/14 11:44:55 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *) src;
	d = (char *) dst;
	i = len;
	if (len == 0)
		return (s);
	if (ft_strlen(dst) < len)
		return (NULL);
	if (dst > src)
	{
		while (0 < i--)
		{
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (d);
}
