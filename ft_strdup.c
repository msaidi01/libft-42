/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:43:24 by msaidi            #+#    #+#             */
/*   Updated: 2022/11/03 00:36:06 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dp;
	size_t	i;

	i = ft_strlen(s1);
	dp = (char *)malloc (sizeof(char) * (i + 1));
	if (!dp)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dp[i] = s1[i];
		i++;
	}
	dp[i] = '\0';
	return (dp);
}
