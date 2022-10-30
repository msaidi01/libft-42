/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:59:40 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/30 16:22:08 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ps;
	size_t	i;

	i = ft_strlen(s) - 1;
	ps = (char *) s;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}
int main()
{
	printf("%s\n", strrchr("abccc\0d", 'c'));
	printf("%s\n", ft_strrchr("abccc\0d", 'c'));
}