/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:05:03 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/19 14:03:21 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *) b;
	while (p[i] && i < len)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
int main()
{
	char c[6] ="sameed" ;
	printf("%s", ft_memset(c,'4',9));
	
}