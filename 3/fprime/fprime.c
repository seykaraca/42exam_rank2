#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = 2;
        int number = atoi(av[1]);
        if(number == 2 || number == 1)
        {
            printf("%d", number);
            return(0);
        }
        while(n <= number)
        {
            if(number % n == 0)
            {
                printf("%d", n);
                number /= n;
                if(n < number)
                printf("%c", '*');
            }
            else
                n++;
        }
    }
    printf("%c", '\n');
}