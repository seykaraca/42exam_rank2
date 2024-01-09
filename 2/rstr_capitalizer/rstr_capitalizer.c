#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if(((i == 0 && str[i + 1] <= 32)|| str[i + 1] <= 32)&& str[i] > 32 && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        write(1, &str[i], 1);
    i++;
    }
}

int main(int ac , char **av)
{
    if(ac > 1)
    {
        int j = 1;
        while(av[j])
        {
            rstr_capitalizer(av[j]);
            write(1, "\n" ,1);
            j++;
        }
    }
    else
        write(1, "\n" ,1);
}