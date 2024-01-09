#include <stdlib.h>
int   count_word(int nbr)
{
    int counter = 0;
    if(nbr == 0)
        counter++;
    if(nbr < 0)
    {
        counter++;
        nbr *= -1;
    }
    while(nbr > 9)
    {
        nbr /= 10;
        counter++;
    }
    if(nbr < 10)
        counter++;
    return(counter);
}

char	*ft_itoa(int nbr)
{
    int len =count_word(nbr);
    char *new;
    new = (char *)malloc(sizeof(char) * len + 1);
    if(!new)
        return(NULL);
    if(nbr == 0)
    {
        new[0] = '0';
    }
    if(nbr < 0)
    {
        new[0] = '-';
        nbr *= -1;
    }
    new[len] = '\0';
    len--;
    while(nbr > 0)
    {
        new[len] = (nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    return(new);
}
