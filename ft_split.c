/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:26:11 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/29 20:40:20 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**makestrs(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		word++;
	}
	strs = (char **)malloc(sizeof(char *) * (word + 1));
	if (!strs)
		return (NULL);
	strs[word] = 0;
	return (strs);
}

static	int	lenstr(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static	char	**fillstrs(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	strs = makestrs(s, c);
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		strs[j] = (char *)malloc(sizeof(char) * (lenstr(s + i, c) + 1));
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	return (strs);
}


char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	strs = fillstrs(s, c);
	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			strs[j][k] = s[i];
			i++;
			k++;
		}
		strs[j][k] = '\0';
		j++;
	}
	return (strs);
}
/*int main()
{
	char **st = ft_split("learning|| is|||fun||as||fuck", '|');
	int i = 0;
	while (st[i])
	{
		printf("%s\n",st[i]);
		i++;
	}
}*/