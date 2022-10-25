/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:41:57 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/10 11:05:54 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	ret = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (*dst == '\0')
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (*src == '\0')
		return (i);
	while (dst[i] && j < dstsize - i - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ret);
}
