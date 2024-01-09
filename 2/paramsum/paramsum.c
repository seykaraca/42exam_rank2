#include <unistd.h>

void ft_print(int number)
{
    if(number > 9)
        ft_print(number / 10);
    write(1, &"0123456789"[number % 10], 1);
}

int main(int ac, char **av)
{
    (void)av;
    if(ac > 1)
    {
        ft_print(ac -1);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}