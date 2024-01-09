#include <unistd.h>

int check_other(char *src, char *dst)
{
    int i = 0;
    int j = 0;
    int counter = 0;
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
        int len = 0;
        int count = 0;
        while(av[1][len])
            len++;
        count = check_other(av[1], av[2]);
        if(count == len)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}