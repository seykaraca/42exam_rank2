#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        int count;
        while(av[1][i])
        {
            count = 0;
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 'a';
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 'A';
            while(count >= 0)
            {
                write(1, &av[1][i], 1);
                count--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}