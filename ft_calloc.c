/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:51:40 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/14 11:45:26 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calloc(size_t count, size_t size)
{
	void	*x;

	x = malloc(count * size);
	if (!x)
		return (NULL);
	ft_bzero(x, count);
	return (x);
}
