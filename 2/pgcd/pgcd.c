#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int p = 0;
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        if(a == 0 || b == 0)
            return(0);
        if(a > b)
            p = b;
        else
            p = a;
        while(1)
        {
            if(a % p == 0 && b % p == 0)
            {
                printf("%d\n", p);
                return(0);
            }
        p--;
        }
    }
    printf("%c", '\n');
}