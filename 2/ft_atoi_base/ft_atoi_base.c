int to_lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        return(c + 32);
    else
        return(c);
}

int turn_decimal(char c, int base)
{
    int max;
    if(base <= 10)
        max = base + '0';
    else
        max = 'a' + base - 10;
    if(c >= 'a' && c <= 'f' && c <= max)
        return(c - 'a' + 10);
    else if(c >= '0' && c <= '9' && c <= max)
        return(c - '0');
    else
        return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int n;
    if(*str == '-')
    {
        sign *= -1;
        str++;
    }
    
    while((n = turn_decimal(to_lower(*str),str_base)) >= 0)
    {
        result *= str_base;
        result += n;
        str++;
    }
    return(result * sign);
}