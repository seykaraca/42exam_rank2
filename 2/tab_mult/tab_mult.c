#include <unistd.h>

int		ft_atoi(char *str)
{
	int n = 0;

	while (*str >= '0' && *str <= '9')
	{
		n = n * 10;
		n = n + *str - '0';
		++str;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);

	char c = (n % 10) + '0';
	write(1, &c, 1);
}

void	tab_mult(char *str)
{
	int number;
	int i = 1;

	number = ft_atoi(str);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(number);
		write(1, " = ", 3);
		ft_putnbr(i * number);
		write(1, "\n", 1);
		++i;
	}
}

int		main(int argc, char **av)
{
	if (argc == 2)
		tab_mult(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}