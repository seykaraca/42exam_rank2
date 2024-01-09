#include <unistd.h>
void    check_in(char *str, int i)
{
    int j = 0;
    while(str[i] != str[j] && j < i)
        j++;
    if(i == j)
        write(1, &str[i], 1);
}

void check_other(char *src, char *dst)
{
    int i = 0;
    int j = 0;
    while(src[i])
    {
        j = 0;
        if(src[i] != dst[j])
        {
            while(src[i] != dst[j] && dst[j])
                j++;
        }
        if(src[i] == dst[j])
            check_in(src,i);
    i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        check_other(av[1], av[2]);
    }
    write(1, "\n", 1);
}