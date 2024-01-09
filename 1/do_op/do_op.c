#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);
        if(*av[2] == '+')
            printf("%d\n", a + b);
        else if(*av[2] == '-')
            printf("%d\n", a - b);
        else if(*av[2] == '*')
            printf("%d\n", a * b);
        else if(*av[2] == '/')
            printf("%d\n", a / b);
        else if(*av[2] == '%')
            printf("%d\n", a % b);
    }
    else
        write(1, "\n", 1);
}