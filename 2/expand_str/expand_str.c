#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        int len = 0;
        while(av[1][len])
            len++;
        len--;
        while(av[1][len] && av[1][len] <= 32)
            len--;
        while(av[1][i])
        {
            if(av[1][i] > 32)
                write(1, &av[1][i], 1);
            if(av[1][i] <= 32 && av[1][i - 1] > 32 && i <= len)
                write(1, "   ", 3);
        i++;
        }
    }
    write(1, "\n", 1);
}