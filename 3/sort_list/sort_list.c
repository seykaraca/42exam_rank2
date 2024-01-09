#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *new;
    new = lst;
    while(lst->next)
    {
        if(cmp(lst->data, lst->next->data) == 0)
        {
        int cmp = lst->data;
        lst->data = lst->next->data;
        lst->next->data = cmp;
        lst = new;
        }
        else
            lst = lst->next;
    }
    lst = new;
    return(lst);
}

/*int ascending(int a, int b)
{
	return (a <= b);
}

#include <stdlib.h>
#include <stdio.h>
int main() {
    t_list *head = malloc(sizeof(t_list));
    head->data = 3;

    head->next = malloc(sizeof(t_list));
    head->next->data = 1;

    head->next->next = malloc(sizeof(t_list));
    head->next->next->data = 2;

    head->next->next->next = NULL;

    t_list *current = head;
    head = sort_list(head, ascending);
    while (current != NULL) 
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // memory cleaning
    current = head;
    while (current != NULL) 
    {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}*/