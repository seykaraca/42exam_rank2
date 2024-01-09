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
 
void    ft_print(int number)
{
    if(number > 9)
        ft_print(number / 10);
    write(1, &"0123456789"[number % 10], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = 2;
        int number = ft_atoi(av[1]);
        int total = 0;
        if(number == 2)
            total = 2;
        while(number > 1)
        {
            n = 2;
            while(number % n != 0 && n < number)
                n++;
            if(n == number)
                total += number;
        number--;
        }
        ft_print(total);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}