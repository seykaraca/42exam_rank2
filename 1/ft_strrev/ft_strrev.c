char    *ft_strrev(char *str)
{
    int len = 0;
    int tmp;
    while(str[len])
        len++;
    int i = 0;
    while(i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return(str);
}