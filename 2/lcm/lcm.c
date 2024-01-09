unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int lcm = 0;
    if(a == 0 || b == 0)
        return(0);
    if(a < b)
        lcm = b;
    else
        lcm = a;
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
            return(lcm);
    lcm++;
    }
}