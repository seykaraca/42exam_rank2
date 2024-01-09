#include <unistd.h>

void	check_in(char *dst)
{
	int i = 0;
 	int j = 0;
	while(dst[i])
	{
		j = 0;
		while(dst[i] != dst[j] && j < i)
			j++;
		if(i == j)
			write(1, &dst[i], 1);
	i++;	
	}
}

void	ft_strlcat(char *dst, char *src)
{
	int i = 0;
	int j = 0;
	while(dst[i])	
		i++;
	while(src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	check_in(dst);
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		if(av[1] && av[2])
			ft_strlcat(av[1], av[2]);
	}
	write(1, "\n", 1);
}
