#include <stdlib.h>
char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **new;
    new = (char **)malloc(256 * sizeof(char));
    if(!new)
        return(NULL);
    while(str[i] && str[i] <= 32)
        i++;
    while(str[i])
    {
        new[j] = (char *)malloc(sizeof(char) * 4096);
        if(!new)
            return(NULL);
        k=0;
        while(str[i] && str[i] > 32)
        {
            new[j][k] = str[i];
            i++;
            k++;
        }
        new[j][k] = '\0';
        j++;
        while(str[i] && str[i] <= 32)
            i++;
    }
    new[j] =NULL;
    return(new);
}
