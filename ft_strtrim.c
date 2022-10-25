/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:47:13 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/24 11:18:58 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	srt;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	srt = 0;
	end = ft_strlen(s1) - 1;
	while (*s1 && ft_strchr(set, s1[srt]))
		srt++;
	while (ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, srt, ((end - srt) + 1)));
}
int main()
{
	printf("%s", ft_strtrim(".,.,,. helodc .,., ,.,. jdyv ,.,.", ",."));
}