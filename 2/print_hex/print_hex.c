#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - '0') + (result * 10);
        i++;
    }
    return(result);
}

void ft_print(int number)
{
    if(number > 16)
        ft_print(number / 16);
    write(1, &"0123456789abcdef"[number % 16], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int number = ft_atoi(av[1]);
        ft_print(number);
    }
    write(1, "\n", 1);
}