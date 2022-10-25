/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaidi <msaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:57:37 by msaidi            #+#    #+#             */
/*   Updated: 2022/10/25 12:41:29 by msaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !*lst)
		return ;
	new->next = *lst;
	*lst = new;
}
int main()
{
	t_list *yahia;
	t_list	*hello;
	
	hello = ft_lstnew((void *)"yahia nadi");
	yahia = ft_lstnew((void *)"yahia fih mochkil");
	ft_lstadd_front(&yahia, hello);
	printf("%s", (char *)yahia->content);
}