#include <unistd.h>

int    check_other(char *src, char *dst)
{
    int counter = 0;
    int i = 0;
    int j = 0;
    while(src[i])
    {
        while(src[i] != dst[j] && dst[j])
            j++;
        if(src[i] == dst[j])
            counter++;
    i++;
    }
    return(counter);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int len = 0;
        while(av[1][len])
            len++;
        int count = check_other(av[1], av[2]);
        if(len == count)
            while(av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
    }
    write(1, "\n", 1);
}