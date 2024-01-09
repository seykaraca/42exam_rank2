#include "ft_list.h"
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *new;
    new = begin_list;
    while(new)
    {
        (*f)(new->data);
        new = new->next;
    }

}