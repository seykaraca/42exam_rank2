#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int size = abs(end - start) + 1;
    int *new = (int *)malloc(sizeof(int) * size);
    if(!new)
        return(NULL);
    while(start < end)
    {
        new[i] = start;
        i++;
        start++;
    }
    while(start > end)
    {
        new[i] = start;
        i++;
        start--;
    }
    new[i] = end;
    return(new);
}