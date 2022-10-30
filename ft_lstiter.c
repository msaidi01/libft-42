#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *new;

    if (!lst || !f)
        return ;
    new = lst;
    while (!lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
