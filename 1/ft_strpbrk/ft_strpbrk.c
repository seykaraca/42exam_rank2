char *strpbrk(const char *s, const char *charset)
{
    int i = 0;
    int j = 0;
    while(s[i])
    {
        while(charset[j])
        {
            if(s[i] == charset[j])
                return((char *)(s+i));
        j++;    
        }
    i++;
    }
    return(0);
}