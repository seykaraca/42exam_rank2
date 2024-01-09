#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    t_list *head = begin_list;
    int counter = 0;
    while(head)
    {
       head = head->next;
       counter++;
    }
    return(counter);
}