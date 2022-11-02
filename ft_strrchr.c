/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:59:40 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/30 23:52:25 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ps;
	int				i;

	i = ft_strlen(s);
	ps = (unsigned char *) s;
	while (i >= 0)
	{
		if (ps[i] == (unsigned char)c)
			return ((char *)ps + i);
		i--;
	}
	return (NULL);
}
