#include  "ft_list.h"
#include <stdlib.h>
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *new = *begin_list;
    while(new)
    {
        if(cmp(new->data, data_ref) == 0)
        {
            *begin_list = new->next;
            free(new);
            ft_list_remove_if(begin_list, data_ref, cmp);
        }
        new = *begin_list;
        ft_list_remove_if(&new->next, data_ref, cmp);
    }
}