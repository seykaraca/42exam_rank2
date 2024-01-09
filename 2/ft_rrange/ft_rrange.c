#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int size = abs(end - start) + 1;
    int *new = (int *)malloc(sizeof(int) * size);
    if(!new)
        return(NULL);
    while(start < end)
    {
        new[i] = end;
        i++;
        end--;
    }
    while(start > end)
    {
        new[i] = end;
        i++;
        end++;
    }
    new[i] = start;
    return(new);
}