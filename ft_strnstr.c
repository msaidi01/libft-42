/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:50:12 by msaidi            #+#    #+#             */
/*   Updated: 2022/11/06 01:42:32 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *ned, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_strlen(ned);
	if (!*ned)
		return ((char *)hays);
	if (len == 0)
		return (NULL);
	i = 0;
	while (hays[i] && i <= len - 1)
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
