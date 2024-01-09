#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    while(src[len])
        len++;
    char *new = malloc(sizeof(char) * len + 1);
    if(!new)
        return(NULL);
    while(i < len)
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return(new);
}