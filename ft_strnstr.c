/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:50:12 by msaidi            #+#    #+#             */
/*   Updated: 2022/11/01 23:10:34 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *ned, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = ft_strlen(ned);
	if (len == 0)
		return (NULL);
	while (hays[i] && i < len - 1)
	{
		j = 0;
		while (hays[i + j] == ned[j] && i + j < len && ned[j])
			j++;
		if (k == j)
			return ((char *) hays + i);
		i++;
	}
	return (NULL);
}
